vector<int> singleNum(vector<int>& arr) {
        // Code here.
        int xr = 0;
        for(int x: arr){
            xr = xr ^ x;
        }
        int lastSetBit = xr & (~(xr-1));
        int a = 0, b = 0;
        for(int x: arr){
            if(x&lastSetBit){
                a = a ^ x;
            }else {
                b = b ^ x;
            }
        }
        if(a<b){
            return {a, b};
        }else{
            return {b, a};
        }
    }
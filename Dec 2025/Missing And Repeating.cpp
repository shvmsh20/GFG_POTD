vector<int> findTwoElement(vector<int>& arr) {
        // code here
         int n = arr.size();
        int x = 0, y = 0, xr = 0;
        for(int i=1; i<=n; i++){
            xr = xr ^ arr[i-1];
            xr = xr ^ i;
        }
        int lastSetBit = (xr & ~(xr-1));
        for(int i=1; i<=n; i++){
            if(arr[i-1]&lastSetBit){
                x = x ^ arr[i-1];
            }else{
                y = y ^ arr[i-1];
            }
            if(i&lastSetBit){
                x = x ^ i;
            }else{
                y = y ^ i;
            }
        }
        for(int i=0; i<n; i++){
            if(arr[i]==x){
                return {x, y};
            }
        }
        return {y, x};
    }
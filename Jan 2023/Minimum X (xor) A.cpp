int minVal(int a, int b) {
        // code here
        int setBits = 0;
        for(int i=0; i<32; i++){
            if(b & (1<<i)){
                setBits++;
            }
        }
        int i=31, res = 0;
        while(i>=0 && setBits!=0){
            if(a&(1<<i)){
                res = res | (1<<i);
                setBits--;
                //cout << i << " ";
            }
            i--;
        }
        i=0;
        while(i<32 && setBits){
            if(!(a & (1<<i))){
                res = res | (1<<i);
                setBits--;
            }
            i++;
        }
        return res;
    }
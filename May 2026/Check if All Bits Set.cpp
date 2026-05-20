bool isBitSet(int n) {
        // code here
        int mxSetBit = -1;
        for(int i=31; i>=0; i--){
            if(n>>i & 1){
                mxSetBit = i;
                break;
            }
        }
        if(mxSetBit==-1) return false;
        for(int i=mxSetBit; i>=0; i--){
            if(!(n>>i & 1)){
                return false;
            }
        }
        return true;
    }
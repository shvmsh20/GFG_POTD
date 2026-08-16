int minProd(vector<int>& arr) {
        // code here
        int hasZero=0, mnPos=INT_MAX, mxNeg = INT_MIN, p=1, countNeg=0;
        for(int x: arr){
            if(x>0){
                p*=x;
                mnPos = min(mnPos, x);
            }else if(x==0){
                hasZero=1;
            }else{
                p*=x;
                countNeg++;
                mxNeg = max(mxNeg, x);
            }
        }
        if(countNeg==0){
            return hasZero?0:mnPos;
        }else{
            if(countNeg%2){
                return p;
            }else{
                return p/mxNeg;
            }
        }
    }
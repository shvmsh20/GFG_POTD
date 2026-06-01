int findMaxProduct(vector<int>& arr) {
        // code here
        int n=arr.size();
        long long pos=1, neg=1;
        int mini=1e9, nCnt=0, pCnt=0, zero=0, mod=1e9+7;
        
        for(int i=0; i<n; i++){
            if(arr[i]>0){
                pos=(pos*arr[i])%mod;
                pCnt++;
            }else if(arr[i]<0){
                neg=(neg*abs(arr[i]))%mod;
                mini=min(mini, abs(arr[i]));
                nCnt++;
            }else zero++;
        }
        
        if(pCnt==0 && nCnt>0){
            if(nCnt==1){
                if(zero>0) return 0;
                else return(-1)*neg;
            }
            if((nCnt%2)==1){
                neg/=mini;
            }
            return neg;
        }else if(pCnt==0 && nCnt==0) return 0;
        
        
        if((nCnt%2)==1){
            neg/=mini;
        }
        
        return (pos*neg)%mod;
    }
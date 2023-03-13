long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
        // code here
        long long res = 0;
        int mn = INT_MAX, tot = 0;
        for(int i=0; i<N; i++){
            if(B[i]%2==0){
                res+= A[i]*B[i];
                mn = min(mn, A[i]);
                tot+= B[i];
            }else if(B[i]-1>=2){
                res+= A[i]*(B[i]-1);
                mn = min(mn, A[i]);
                tot+= B[i]-1;
            }
        }
        if(tot%4!=0){
            return res - (mn*2);
        }
        return res;
    }
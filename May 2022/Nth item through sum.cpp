int nthItem(int L1, int L2, int A[], int B[], int N)
    {
        // code here
        set<int> s;
        
        
        for(int i=0; i<L1; i++){
            for(int j=0; j<L2; j++){
                s.insert(A[i]+B[j]);
            }
        }
        int ans = -1;
        for(auto x: s){
            if(N==1){
                ans =  x;
                break;
            }
            N = N-1;
        }
        return ans;
    }
int canReach(int A[], int N) {
        // code here
        bool dp[N];
        for(int i=0; i<N; i++){
            dp[i] = false;
        }
        dp[N-1] = true;
        for(int i=N-2; i>=0; i--){
            for(int j=1; j<=A[i] && j+i<N; j++){
                if(dp[i+j]==true){
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[0];
    }
long long int util(int n, vector<long long> &dp){
        if(n<=3){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n] = util(n-1, dp)+util(n-4, dp);
    }
    long long int arrangeTiles(int n){
        // code here    
        vector<long long int> dp(n+1, -1);
        return util(n, dp);
        
    }
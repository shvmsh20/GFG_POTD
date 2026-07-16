vector<vector<int>> dp;
    int solve(int n,int sum,int cnt,int sum1){
        if(cnt == n){
            if(sum == sum1){
                return dp[cnt][sum1] = 1;
            }
            else{
                return dp[cnt][sum1] = 0;
            }
        }
        if(dp[cnt][sum1] != -1){
            return dp[cnt][sum1];
        }
        int a = 0;
        for(int j = 0;j<=9;j++){
            a += solve(n,sum,cnt+1,sum1+j);
        }
        return dp[cnt][sum1] = a;
    }
    int countWays(int n, int sum) {
        //constraints are small.
        dp.assign(n+1,vector<int>(8101,-1));
        int b = 0;
        for(int i = 1;i<=9;i++){
           int cnt = 1;
           int sum1 = i;
           b += solve(n,sum,cnt,sum1);
        }
        if(b == 0){
            return -1;
        }
        return b;
    }
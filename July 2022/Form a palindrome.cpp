int countMin(string str){
    //complete the function here
        int n = str.size();
        string s = str;
        reverse(s.begin(), s.end());
        int dp[n+1][n+1];
        for(int i=0; i<=n; i++){
            dp[0][i] = dp[i][0] = 0;
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(str[i-1]==s[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return n-dp[n][n];
    }
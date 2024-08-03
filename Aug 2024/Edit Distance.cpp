int helper(vector<vector<int>> &dp, string a, string b, int i, int j){
        // Base cases
        if(i < 0) return j + 1;
        if(j < 0) return i + 1;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        if(a[i] == b[j]) dp[i][j] = helper(dp, a, b, i - 1, j - 1);
        else{
            dp[i][j] = 1 + min({helper(dp, a, b, i - 1, j), helper(dp, a, b, i, j - 1), helper(dp, a, b, i - 1, j - 1)});
        }
        
        return dp[i][j];
    }
  
    int editDistance(string str1, string str2) {
        // Code here
        int n = str1.size(), m = str2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        
        // Recursive solution
        // return helper(dp, str1, str2, n - 1, m - 1);
        
        // iterative solution
        for(int i = 0; i <= n; i++){
            dp[i][0] = i;
        }
        for(int i = 0; i <= m; i++){
            dp[0][i] = i;
        }
        
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(str1[i - 1] == str2[j - 1]) dp[i][j] = dp[i - 1][j - 1];
                else dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
            }
        }
        
        return dp[n][m];
    }
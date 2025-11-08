int numberOfPath(vector<vector<int>>& mat, int k) {
        // Code Here
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(k + 1, 0)));
        dp[0][0][mat[0][0]] = 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                for (int coins = 0; coins <= k; coins++) {
                    if (dp[i][j][coins] > 0) {
                        if (i + 1 < n && coins + mat[i + 1][j] <= k)
                            dp[i + 1][j][coins + mat[i + 1][j]] += dp[i][j][coins];
                        if (j + 1 < m && coins + mat[i][j + 1] <= k)
                            dp[i][j + 1][coins + mat[i][j + 1]] += dp[i][j][coins];
                    }
                }
            }
        }
        
        return dp[n - 1][m - 1][k];
    }
int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for (int gap = 1; gap < n; ++gap) {
            for (int l = 0, r = gap; r < n; ++l, ++r) {
                if (s[l] == s[r]) {
                    dp[l][r] = dp[l + 1][r - 1];
                } else {
                    dp[l][r] = min(dp[l + 1][r], dp[l][r - 1]) + 1;
                }
            }
        }
        return dp[0][n - 1];
    }
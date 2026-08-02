nt count(int n, int m) {
        // code here
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

 

        // Base case

        for (int i = 1; i <= m; i++)

            dp[1][i] = 1;

 

        // DP

        for (int len = 2; len <= n; len++) {

 

            for (int last = 1; last <= m; last++) {

 

                for (int prev = 1; prev <= m; prev++) {

 

                    if (prev % last == 0 || last % prev == 0)

                        dp[len][last] += dp[len - 1][prev];

                }

            }

        }

 

        int ans = 0;

 

        for (int i = 1; i <= m; i++)

            ans += dp[n][i];

 

        return ans;
    }
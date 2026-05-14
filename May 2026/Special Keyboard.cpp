int optimalKeys(int n) {
        // code here
        vector<int> dp(n + 1, 0);

        // Base case:
        // Pressing 'A' each time
        for (int i = 1; i <= n; i++) {
            dp[i] = i;
        }

        // Try all break points
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i - 3; j++) {

                // After j operations:
                // Ctrl+A, Ctrl+C -> 2 ops
                // Remaining pastes = i-j-2
                // Total multiplier = (remaining pastes + 1)
                dp[i] = max(dp[i], dp[j] * (i - j - 1));
            }
        }
        return dp[n];
    }
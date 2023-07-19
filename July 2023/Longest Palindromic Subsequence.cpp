int longestPalinSubseq(string S) {
        //code here
        int n = S.length();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    // Base case: a single character is always a palindrome of length 1.
    for (int i = 0; i < n; i++)
        dp[i][i] = 1;

    // Filling up the dp table for all substrings of length >= 2.
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;

            // If the characters at both ends are the same, then the length of the
            // palindrome is 2 plus the length of the palindrome inside the substring.
            if (S[i] == S[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                // If the characters at both ends are different, then the length of the
                // palindrome is the maximum of the two possible palindromes after removing
                // one character from either end.
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
        }
    }

    // The length of the longest palindromic subsequence is stored in dp[0][n-1].
    return dp[0][n - 1];
    }
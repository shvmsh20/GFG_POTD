int solve(int index1, int index2, int n, int m, string &s1, string &s2, vector<vector<int>> &dp){
        if(index1==n || index2==m){
            return 0;
        }
        if(dp[index1][index2]!=-1){
            return dp[index1][index2];
        }
        // skip s1
        int res = solve(index1+1, index2, n, m, s1, s2, dp);
        // skip s2
        res = max(res, solve(index1, index2+1, n, m, s1, s2, dp));
        // check for maatch
        if(s1[index1]==s2[index2]){
            res = max(res, 1+solve(index1+1, index2+1, n, m, s1, s2, dp));
        }
        return dp[index1][index2] = res;
    }
    int longestPalinSubseq(string &s) {
        // code here
        string rev = s;
        reverse(rev.begin(), rev.end());
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return solve(0, 0, n, n, s, rev, dp);
    }
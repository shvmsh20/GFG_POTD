int findLCS(int i, int j, int n, int m, vector<int> &a, vector<int> &b,
    vector<vector<int>> &dp){
        if(i==n || j==m){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int res = findLCS(i+1, j, n, m, a, b, dp);
        res = max(res, findLCS(i, j+1, n, m, a, b, dp));
        if(a[i]==b[j]){
            res = max(res, 1+findLCS(i+1, j+1, n, m, a, b, dp));
        }
        return dp[i][j] = res;
    }
    int minInsAndDel(vector<int> &a, vector<int> &b) {
        // code here
        int n = a.size(), m = b.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        int lcs = findLCS(0, 0, n, m, a, b, dp);
        int insertions = m-lcs, deletions = n-lcs;
        return insertions+deletions;
    }
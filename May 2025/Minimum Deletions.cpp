int lps(int index1, int index2, int n, string &s1, string &s2,  vector<vector<int>> &dp){
        if(index1==n || index2==n){
            return 0;
        }
        if(dp[index1][index2]!=-1){
            return dp[index1][index2];
        }
        int res = 0;
        if(s1[index1]==s2[index2]){
            res = 1+ lps(index1+1, index2+1, n, s1, s2, dp);
        }
        res = max(res, lps(index1+1, index2, n, s1, s2, dp));
        res = max(res, lps(index1, index2+1, n, s1, s2, dp));
        return dp[index1][index2] = res;
    }
    int minDeletions(string s) {
        // code here
        string t = s;
        reverse(t.begin(), t.end());
        int n = t.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        int res = lps(0, 0, n, s, t, dp);
        return n-res;
    }
int solve(int index, int n, string &s, int prevSum, vector<vector<int>> &dp){
        if(index==n){
            return 1;
        }
        if(dp[index][prevSum]!=-1){
            return dp[index][prevSum];
        }
        int currSum = 0, res = 0;
        for(int i=index; i<n; i++){
            currSum+= s[i]-'0';
            if(currSum>=prevSum){
                res += solve(i+1, n, s, currSum, dp);
            }
        }
        return dp[index][prevSum] = res;
    }
    int validGroups(string &s) {
        // code here
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(901, -1));
        return solve(0, n, s, 0, dp);
    }
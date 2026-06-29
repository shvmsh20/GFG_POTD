int solve(int i, int j, int n, int m, vector<int> &a, vector<int> &b, 
    vector<vector<int>> &dp){
        if(i==n || j==m){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int res = (a[i]*b[j]) + solve(i+1, j+1, n, m, a, b, dp);
        // check if not take poss
        if((m-j)<(n-i)){
            res = max(res, solve(i+1, j, n, m, a, b, dp));
        }
        return dp[i][j] = res;
    }
    int maxDotProduct(vector<int>& a, vector<int>& b) {
        // code here
       
        int n = a.size(), m = b.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(0, 0, n, m, a, b, dp);
        
    }
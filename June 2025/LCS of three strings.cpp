int solve(int i, int j, int k, int x, int y, int z, string& s1, string& s2, 
    string& s3, vector<vector<vector<int>>> &dp){
        if(i==x || j==y || k==z) return 0;
        if(dp[i][j][k]!=-1) return dp[i][j][k];
        int res = 0;
        if(s1[i]==s2[j] && s2[j]==s3[k]){
            res = 1+solve(i+1, j+1, k+1, x, y, z ,s1, s2, s3, dp);
        }else{
            res = max(res, solve(i+1, j, k, x, y, z, s1, s2, s3, dp));
            res = max(res, solve(i, j+1, k, x, y, z, s1, s2, s3, dp));
            res = max(res, solve(i, j, k+1, x, y, z, s1, s2, s3, dp));
        }
        return dp[i][j][k] = res;
    }
    int lcsOf3(string& s1, string& s2, string& s3) {
        // Code here
        int x = s1.size(), y = s2.size(), z = s3.size();
        vector<vector<vector<int>>> dp(x, vector<vector<int>> (y, vector<int>(z, -1)));
        return solve(0, 0, 0, x, y, z, s1, s2, s3, dp);
    }
int n, m;
   
   
   bool exist(int x, int y, vector<vector<int>>& mat){
       return (x >= 0 and y >= 0 and x < n and y < m and mat[x][y] != -1);
   }
   
   int rec(int x, int y, vector<vector<int>>& dp, vector<vector<int>>& mat){
       if(x == n-1)  return mat[x][y];
       if(dp[x][y] != -1)      return dp[x][y];
       int down = 0, left = 0, right = 0;
       if(exist(x+1, y, mat))  down = rec(x+1, y, dp, mat);
       if(exist(x+1, y-1, mat))  left = rec(x+1, y-1, dp, mat);
       if(exist(x+1, y+1, mat))    right = rec(x+1, y+1, dp, mat);
       return dp[x][y] = mat[x][y] + max(down, max(left, right));
   }
int MaxGold(vector<vector<int>>&matrix){
    // Code here
   n = matrix.size(), m = matrix[0].size();
   int max_ = 0;
   for(int i=0;i<m;i++){
       vector<vector<int>> dp(n, vector<int>(m, -1));
       if(matrix[0][i] != -1)     max_ = max(max_, rec(0, i, dp, matrix));
   }
   return max_;
}
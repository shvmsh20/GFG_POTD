vector<int>dx = {1,1,1,-1,-1,-1,0,0};
    vector<int>dy = {1,0,-1,-1,1,0,1,-1};
  public:
    void dfs(vector<vector<char>>&grid,int i,int j,vector<vector<int>>&vis){
        int n = grid.size();
        int m = grid[0].size();
        if(i<0 || i>=n || j>=m || j<0 || vis[i][j]==1 || grid[i][j]=='W'){
            return;
        }
        vis[i][j] = 1;
        for(int k=0;k<8;k++){
            int x = i + dx[k];
            int y = j + dy[k];
            dfs(grid,x,y,vis);
        }
    }
    int countIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ct = 0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j] == 0 and grid[i][j] == 'L'){
                     ct++;
                     dfs(grid,i,j,vis);
                }
            }
        }
        return ct;
    }
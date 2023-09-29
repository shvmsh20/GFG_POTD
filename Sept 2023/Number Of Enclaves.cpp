bool isValid(int x,int y,int n,int m,vector<vector<int>> &grid,vector<vector<bool>> &vis){
      if(x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 1 && !vis[x][y])
          return (true);
      return (false);
  }
  
  void dfs(int x,int y,int &n,int &m,vector<vector<int>> &grid,int &cnt,bool &canReach,vector<vector<bool>> &vis){
      
      cnt++;
      vis[x][y] = true;
      
      int dx[] = {-1,1,0,0};
      int dy[] = {0,0,1,-1};
      for(int i = 0; i < 4; i++){
          int nx = x + dx[i];
          int ny = y + dy[i];
          if(isValid(nx,ny,n,m,grid,vis)){
              dfs(nx,ny,n,m,grid,cnt,canReach,vis);
          }
          
          if(!(nx >= 0 && nx < n && ny >= 0 && ny < m)) canReach = true;
      }
      
  }
        
    
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!vis[i][j] && grid[i][j] == 1){
                    int cnt = 0;
                    bool canReach = false;
                    dfs(i,j,n,m,grid,cnt,canReach,vis);
                    if(!canReach) ans += cnt;
                }
            }
        }
        
        return (ans);
    }
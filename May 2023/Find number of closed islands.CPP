oid dfs(vector<vector<int>>& matrix,vector<vector<bool>> &visited,int x,int y, int n, int m){
        if(x<0||y<0||x>=n||y>=m||visited[x][y]==true||matrix[x][y]==0)return;
        
        visited[x][y]=true;
        
        //recur for adjacent islands
        dfs(matrix,visited,x+1,y,n,m);
        dfs(matrix,visited,x,y+1,n,m);
        dfs(matrix,visited,x-1,y,n,m);
        dfs(matrix,visited,x,y-1,n,m);
    }
    int closedIslands(vector<vector<int>>& matrix, int n, int m) {
        // Code here
        //visited martix
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        
        //loop for edge islands
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if((i*j==0||i==n-1||j==m-1) && matrix[i][j]==1 && visited[i][j]==false){
                    dfs(matrix,visited,i,j,n,m);
                }
            }
        }
        int noislands=0;
        //loop for unvisited islands in center
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==1&&visited[i][j]==false){
                    noislands+=1;
                    dfs(matrix,visited,i,j,n,m);
                }
            }
        }
        return noislands;
    }
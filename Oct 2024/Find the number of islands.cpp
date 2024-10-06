bool isSafe(vector<vector<char>>& grid, int r, int c){
        if(r>=0 && r<grid.size() && c>=0 && c<grid[0].size() && grid[r][c]=='1'){
            return true;
        }
        return false;
    }
    void DFS(vector<vector<char>>& grid, bool visited[500][500], int r, int c){
        if(isSafe(grid, r, c)==false || visited[r][c]==true){
            return;
        }
        visited[r][c] = true;
        DFS(grid, visited, r, c+1);
        DFS(grid, visited, r+1, c);
        DFS(grid, visited, r, c-1);
        DFS(grid, visited, r-1, c);
        DFS(grid, visited, r+1, c+1);
        DFS(grid, visited, r-1, c-1);
        DFS(grid, visited, r-1, c+1);
        DFS(grid, visited, r+1, c-1);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        bool visited[500][500] = {false};
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(visited[i][j]==false && grid[i][j]=='1'){
                    DFS(grid, visited, i, j);
                    count++;
                }
            }
        }
        return count;
    }
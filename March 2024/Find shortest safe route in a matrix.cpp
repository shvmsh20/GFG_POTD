int findShortestPath(vector<vector<int>> &mat)
    {
       // code here
       int n = mat.size(), m = mat[0].size();
        
        // Mark obstacles and their adjacent cells as visited (-1)
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(mat[i][j] == 0){
                    if(i - 1 >= 0) mat[i - 1][j] = -1;
                    if(j - 1 >= 0) mat[i][j - 1] = -1;
                    if(i + 1 < n) mat[i + 1][j] = -1;
                    if(j + 1 < m) mat[i][j + 1] = -1;
                }
            }
        }
       
        queue<pair<pair<int,int>,int>> q; // Queue for BFS
        vector<vector<bool>> vis(n, vector<bool>(m, false)); // Matrix to keep track of visited cells
        
        // Start BFS from the leftmost column
        for(int i = 0; i < n; ++i){
            if(mat[i][0] == 1){
                q.push({{i, 0}, 1}); // Push coordinates and step count
            }
        }
       
        while(!q.empty()){
            auto top = q.front();
            int x = top.first.first;
            int y = top.first.second;
            vis[x][y] = true;
            int step = top.second;
            
            // If reached the rightmost column, return the step count
            if(y == m - 1) return step;
            q.pop();
            
            // Explore neighboring cells (up, down, right)
            if(x - 1 >= 0 && mat[x - 1][y] == 1 && !vis[x - 1][y]){
                q.push({{x - 1, y}, step + 1});
            }
            if(x + 1 < n && mat[x + 1][y] == 1 && !vis[x + 1][y]){
                q.push({{x + 1, y}, step + 1});
            }
            if(y + 1 < m && mat[x][y + 1] == 1 && !vis[x][y + 1]){
                q.push({{x, y + 1}, step + 1});
            }
        }
        
        // If no clear path from leftmost to rightmost column, return -1
        return -1;
    }
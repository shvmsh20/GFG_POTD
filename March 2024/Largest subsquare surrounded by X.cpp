int largestSubsquare(int n, vector<vector<char>> grid) {
        vector<vector<int>> rows(n, vector<int>(n, 0)), cols(n, vector<int>(n, 0));
        rows[0][0] = cols[0][0] = grid[0][0] == 'X';
        for(int i = 1; i < n; i++) {
            rows[0][i] = grid[0][i] == 'X' ? rows[0][i-1] + 1 : 0;
            rows[i][0] = grid[i][0] == 'X', cols[0][i] = grid[0][i] == 'X';
            cols[i][0] = grid[i][0] == 'X' ? cols[i-1][0] + 1 : 0;
        }
        for(int i = 1; i < n; i++){
            for(int j = 1; j < n; j++){
                rows[i][j] = grid[i][j] == 'X' ? rows[i][j-1] + 1 : 0;
                cols[j][i] = grid[j][i] == 'X' ? cols[j-1][i] + 1 : 0;
            }
        } 
        int ans = 0;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                for(int k = min(cols[i][j], rows[i][j]), f = 1; k > 0 and f; k--)
                    if(rows[i-k+1][j] >= k and cols[i][j-k+1] >= k and ans < k)
                        ans = k, f = 0; 
        return ans;
    }
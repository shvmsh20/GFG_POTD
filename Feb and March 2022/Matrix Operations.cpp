bool check(int x, int y, int r, int c){
        if(x < 0 || r <= x) return true;
        if(y < 0 || c <= y) return true;
        
        return false;
    }
    pair<int,int> endPoints(vector<vector<int>> matrix){
        //code here
        int i = 0, j = 0; 
        int r = matrix.size();
        int c = matrix[0].size();
        int dr[4] = {0, 1, 0, -1};
        int dc[4] = {1, 0, -1, 0};
        
        int x = 0;
        while(true){
            if(matrix[i][j] == 0){
                if(check(i + dr[x], j + dc[x], r, c)){
                    return {i, j};
                }
                i  = i + dr[x];
                j  = j + dc[x];
            }
            else{
                x = (x + 1)% 4;
                matrix[i][j] = 0;
                if(check(i + dr[x], j + dc[x], r, c)){
                    return {i, j};
                }
                i = i + dr[x];
                j = j + dc[x];
            }
        }
    }
bool isSafe(vector<int> board[], int n, int row, int col){
        for(int i=0;i<col;i++){
            if(board[row][i]==1){
                return false;
            }
        }
        
        for(int i = row, j = col; i>=0 && j>=0; i--, j--){
            if(board[i][j]==1){
                return false;
            }
        }
        for(int i=row, j = col; i<n && j>=0; i++, j--){
            if(board[i][j]==1){
                return false;
            }
        }
        return true;
    }
    bool solve(vector<int> board[], int n, int col, vector<vector<int>> &v, vector<int> &ans){
        if(col==n){
            v.push_back(ans);
            return true;
        }
        for(int i=0;i<n;i++){
            if(isSafe(board, n, i, col)){
                board[i][col] = 1;
                ans.push_back(i+1);
                solve(board, n, col+1, v, ans);
                board[i][col] = 0;
                ans.pop_back();
            }
        }
        return false;
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>> v;
        vector<int> ans;
        vector<int> board[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                board[i].push_back(0);
            }
        }
        solve(board, n, 0, v, ans);
        sort(v.begin(), v.end());
        return v;
    }
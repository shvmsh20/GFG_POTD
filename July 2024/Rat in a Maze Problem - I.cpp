void travel(vector<vector<int>> &mat, vector<string> &ans, int n, int i, int j, string curr){
        if( i == n || j == n || i < 0 || j < 0){
            return;
        }
        if( i == n - 1 && j == n - 1){
            ans.push_back(curr);
            return;
        }
        if(mat[i][j] == 0){
            return;
        }
        mat[i][j] = 0;
        travel(mat, ans, n, i + 1, j, curr + 'D');
        travel(mat, ans, n, i - 1, j, curr + 'U');
        travel(mat, ans, n, i, j + 1, curr + 'R');
        travel(mat, ans, n, i, j - 1, curr + 'L');
        mat[i][j] = 1;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        vector<string> ans;
        int n = mat.size();
        if(mat[n - 1][n - 1] == 0){
            return ans;
        }
        travel(mat, ans, n, 0, 0, "");
        return ans;
    }
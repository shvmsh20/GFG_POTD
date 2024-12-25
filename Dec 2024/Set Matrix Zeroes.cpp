void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        vector<int> rowZero(n);
        vector<int> colZero(m);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 0){
                    rowZero[i] = 1;
                    colZero[j] = 1;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (rowZero[i] == 1 || colZero[j] == 1){
                    mat[i][j] = 0;
                }
            }
        }
    }
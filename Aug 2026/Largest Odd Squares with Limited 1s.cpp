 vector<int> largestSquare(vector<vector<int>>& mat, vector<vector<int>>& queries,
                              int k) {
        // code here
        int r = mat.size();
        int c = mat[0].size();
        vector<vector<int>> prefSum(r + 1, vector<int>(c + 1, 0));

        prefSum[1][1] = mat[0][0];
        for (int j = 1; j < c; j++)
            prefSum[1][j + 1] += mat[0][j] + prefSum[1][j];
        for (int i = 1; i < r; i++)
            prefSum[i + 1][1] += mat[i][0] + prefSum[i][1];

        for (int i = 1; i < r; i++)
            for (int j = 1; j < c; j++)
                prefSum[i + 1][j + 1] = prefSum[i][j + 1] + prefSum[i + 1][j] - prefSum[i][j] + mat[i][j];

        vector<int> res;
        for (auto it : queries) {
            int i = it[0] + 1;
            int j = it[1] + 1;
            int v = 0;
            while ((i + v <= r) && (i - v > 0) && (j + v <= c) && (j - v > 0)) {
                if (prefSum[i + v][j + v] - prefSum[i - v - 1][j + v] - prefSum[i + v][j - v - 1] + prefSum[i - v - 1][j - v - 1] > k)
                    break;
                v++;
            }
            res.push_back(2 * v - 1);
        }
        return res;
    }
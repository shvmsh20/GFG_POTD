class Solution {
  public:
      int n;
    vector<vector<int>> dp;

    bool solve(int i, int j,
               vector<vector<int>>& mat,
               vector<vector<int>>& ans) {

        if (i >= n || j >= n || mat[i][j] == 0)
            return false;

        if (i == n - 1 && j == n - 1) {
            ans[i][j] = 1;
            return true;
        }

        // Already determined impossible
        if (dp[i][j] == 0)
            return false;

        ans[i][j] = 1;

        int jump = mat[i][j];

        // Smaller jumps first
        for (int k = 1; k <= jump; k++) {

            // Right first
            if (j + k < n) {
                if (solve(i, j + k, mat, ans))
                    return true;
            }

            // Down second
            if (i + k < n) {
                if (solve(i + k, j, mat, ans))
                    return true;
            }
        }

        ans[i][j] = 0;

        // Mark as impossible
        dp[i][j] = 0;

        return false;
    }

    vector<vector<int>> shortestDist(vector<vector<int>>& mat) {
        n = mat.size();

        if (mat[0][0] == 0)
            return {{-1}};

        vector<vector<int>> ans(n, vector<int>(n, 0));

        // 1 = unknown, 0 = cannot reach destination
        dp.assign(n, vector<int>(n, 1));

        if (solve(0, 0, mat, ans))
            return ans;

        return {{-1}};
    }
};
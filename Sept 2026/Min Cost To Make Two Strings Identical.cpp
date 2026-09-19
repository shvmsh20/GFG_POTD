int solve(int i, int j, string& s1, string& s2, int& cost1, int& cost2, vector<vector<int>>& dp) {


          if (i == s1.length()) {
              return (s2.length() - j) * cost2;
          }

          if (j == s2.length()) {
              return (s1.length() - i) * cost1;
          }

          if (i == s1.length() && j == s2.length()) {
              return 0;
          }

          if (dp[i][j] != -1) {
              return dp[i][j];
          }
          int ans = INT_MAX;

          if (s1[i] == s2[j]) {
              ans = solve(i+1, j+1, s1, s2, cost1, cost2, dp);
          } else {
              ans = min(ans, cost1 + solve(i+1, j, s1, s2, cost1, cost2, dp));
              ans = min(ans, cost2 + solve(i, j+1, s1, s2, cost1, cost2, dp));
              ans = min(ans, cost1 + cost2 + solve(i+1, j+1, s1, s2, cost1, cost2, dp));

          }

          return dp[i][j] = ans;
      }
      int findMinCost(string &s1, string &s2, int costS1, int costS2) {
          // code here
          int n = s1.length();
          int m = s2.length();

          // vector<vector<int>>dp (n+1, vector<int>(m+1, -1));

          vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

          dp[n][m] = 0;

          for (int j = 0; j < m; j++) {
              dp[n][j] = (m - j) * costS2;
          }

          for (int i = 0; i < n; i++) {
              dp[i][m] = (n - i) * costS1;
          }

          for (int i = n-1; i >= 0; i--) {
              for (int j = m-1; j >= 0; j--) {

                  int ans = INT_MAX;

                  if (s1[i] == s2[j]) {
                      ans = dp[i+1][j+1];
                  } else {

                      ans = min(ans, costS1 + dp[i+1][j]);
                      ans = min(ans, costS2 + dp[i][j+1]);
                      ans = min(ans, costS1 + costS2 + dp[i+1][j+1]);
                  }

                  dp[i][j] = ans;
              }
          }
          // return solve(0, 0, s1, s2, costS1, costS2, dp);

          return dp[0][0];
      }
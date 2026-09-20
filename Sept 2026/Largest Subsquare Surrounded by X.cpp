 int largestSubsquare(vector<vector<char>> &a) {
        // code here
        int n = a.size();
        vector<vector<pair<int, int>>> v(n, vector<pair<int, int>> (n, {-1, -1}));
              for(int row = 0; row<n; row++) {
                  int bul = -1;
                  for(int j=n-1; j>=0; j--) {
                      if(a[row][j] == 'X') {
                          if(bul == -1) bul = j;
                      }
                      else {
                          bul = -1;
                      }
                      v[row][j].first = bul;
                  }
              }

              for(int col = 0; col<n; col++) {
                  int bul = -1;
                  for(int j=n-1; j>=0; j--) {
                      if(a[j][col] == 'X') {
                          if(bul == -1) bul = j;
                      }
                      else {
                          bul = -1;
                      }
                      v[j][col].second = bul;
                  }
              }


              int ans = 0;
              for(int i=0; i<n; i++) {
                  for(int j=0; j<n; j++) {
                      int rightMostIdx = v[i][j].first;
                      int bottomMostIdx = v[i][j].second;

                      int rightReach = rightMostIdx - j+1;
                      int bottomReach = bottomMostIdx - i+1;

                      int currSz = min(rightReach, bottomReach);

                      while(currSz > ans) {
                          int currRightsBottomReach = v[i][j+currSz-1].second - i + 1;
                          int currBottomsRightReach = v[i+currSz-1][j].first - j + 1;
                          if(currRightsBottomReach>=currSz && currBottomsRightReach>=currSz) {
                              ans = currSz;
                              break;
                          }


                          currSz--;
                      }
                  }
              }

              return ans;
    }
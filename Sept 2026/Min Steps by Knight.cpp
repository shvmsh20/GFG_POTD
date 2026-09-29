 bool isValid(int x, int y, vector<vector<int>> &vis) {
          int n = vis.size();
          return x > 0 and x < n and y > 0 and y < n and vis[x][y];
      }
      int minStepToReachTarget(vector<int>& knightPos, vector<int>& targetPos, int n) {
          int ans = INT_MAX, sx = knightPos.front(), sy = knightPos.back(), ex = targetPos.front(), ey = targetPos.back();
          if(sx == ex and sy == ey) 
              return 0;

          queue<tuple<int, int, int>> q;
          vector<vector<int>> vis (n+1, vector<int>(n+1, 1));     // unvisited cell at start

          q.push({sx, sy, 0});
          vis[knightPos.front()][knightPos.back()] = 0;

          while(!q.empty()) {
              int curX = get<0>(q.front()), curY = get<1>(q.front()), curCnt = get<2>(q.front());
              q.pop();

              if(curX == ex and curY == ey)
                  ans = min(ans, curCnt);

              // potential next cells
              // top left
              // top right
              // horizontal right-top
              // horizontal right-bottom
              // horizontal left-top
              // horizontal left-bottom
              // bottom right
              // bottom left
              vector<pair<int,int>> cells {{-2, -1}, {-2, 1}, {-1, 2}, {-1, -2}, {1, 2}, {1, -2}, {2, -1}, {2, 1}};

              for(auto cell: cells) {
                  int x = cell.first, y = cell.second;
                  if(isValid(curX+x, curY+y, vis)) {
                      vis[curX+x][curY+y] = 0;
                      q.push({curX+x, curY+y, curCnt+1});
                  }
              }
          }
          return ans;
      }
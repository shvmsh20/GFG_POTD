int gcd(int a, int b) {
          if (b == 0) return a;
          return gcd(b, a % b);
      }
      void buildSegTree(int idx, int low, int high, vector<int> &arr, vector<int> &segTree) {
          if (low == high) {
              segTree[idx] = arr[low];
              return;
          }
          int mid = (low + high)/2;
          buildSegTree(2 * idx + 1, low, mid, arr, segTree);
          buildSegTree(2 * idx + 2, mid + 1, high, arr, segTree);
          segTree[idx] = gcd(segTree[2 * idx + 1], segTree[2 * idx + 2]);
      }
      int query(int idx, int low, int high, int l, int r, vector<int> &segTree) {
          if (l <= low && high <= r) return segTree[idx];
          else if (r < low || l > high) return 0;
          else {
              int mid = (low + high)/2;
              int leftQuery = query(2 * idx + 1, low, mid, l, r, segTree);
              int rightQuery = query(2 * idx + 2, mid + 1, high, l, r, segTree);
              return gcd(leftQuery, rightQuery);
          }
      }
      void updateSegTree(int idx, int low, int high, int pos, vector<int> &arr, vector<int> &segTree) {
          if (low == high) {
              segTree[idx] = arr[low];
              return;
          }
          int mid = (low + high)/2;
          if (pos <= mid) {
              updateSegTree(2 * idx + 1, low, mid, pos, arr, segTree);
          } else {
              updateSegTree(2 * idx + 2, mid + 1, high, pos, arr, segTree);
          }
          segTree[idx] = gcd(segTree[2 * idx + 1], segTree[2 * idx + 2]);
      }
    public:
      vector<int> processQueries(vector<int>& arr, vector<vector<int>>& queries) {
          int n = arr.size();
          vector<int> segTree(4 * n), res;
          buildSegTree(0, 0, n - 1, arr, segTree);
          for(auto q: queries) {
              if (q[0] == 0) {
                  res.push_back(query(0, 0, n - 1, q[1], q[2], segTree));
              } else {
                  arr[q[1]] = q[2];
                  updateSegTree(0, 0, n - 1, q[1], arr, segTree);
              }
          }
          return res;
      }
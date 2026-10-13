vector<int> update(int n, vector<int>& updates) {
        // code here
        vector<int> ans(n, 0);

               for (auto i : updates) {
                   ans[i-1]++;
               }

               for (int i = 1; i < n; i++) {
                   ans[i] = ans[i-1] + ans[i];
               }

               return ans;
    }
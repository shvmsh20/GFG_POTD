void solve(vector<int>&arr,int n,int s,vector<vector<int>>&ans, set<vector<int>>&a){
      if (s == n) {
          auto it=a.find(arr);
              if(it!=a.end()){
                  return;
              }
          a.insert(arr);
            ans.push_back(arr);
            return;
        }
        for (int i = s; i < n; i++) {
            swap(arr[s], arr[i]);
            solve(arr, n, s + 1, ans,a);
            swap(arr[s], arr[i]); // Backtrack to restore the original array
        }
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
      vector<vector<int>>ans;
      set<vector<int>>a;
      //ans[0].push_back(0);
      int s=0;
      solve(arr,n,s,ans,a);
      sort(ans.begin(),ans.end());
        return ans;
    }
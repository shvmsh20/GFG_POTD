vector<int> rearrange(const vector<int>& arr) {
        // Code here
         int n = arr.size();
        vector<int> ans(n, -1);
        for(int i = 0; i < n; i++)
        {
            if(arr[i] >= 0)
            {
                ans[arr[i]] = arr[i];
            }
        }
        return ans;
        
    }
int longestSubarray(vector<int> &arr, int k) {
        // Code here
        int n = arr.size();
        int ans = 0;
        int cnt = 0;
        
        unordered_map <int, int> mp;
        for(int i = -n-1; i <= n+1; i++) mp[i] = -1;
        
        mp[0] = 0;
        for(int i = 0; i < n; i++){
            cnt += (arr[i] > k);
            cnt -= (arr[i] <= k);
            
            if(mp[cnt] == -1) mp[cnt] = i;
            if(cnt > 0) ans = i+1;
            else if(mp[cnt-1] != -1) ans = max(ans, i - mp[cnt-1]);
        }
        
        return ans;
    }
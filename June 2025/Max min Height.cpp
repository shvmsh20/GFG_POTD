bool check(int mid, vector<int>& arr, int k, int w) {
        int n = arr.size();
        vector<long long> mp(n + 1, 0);
    
        long long cnt = 0, sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += mp[i];
            if (arr[i] + sum < mid) {
                long long diff = 1LL * mid - (arr[i] + sum);
                cnt += diff;
                if (cnt > k) return false;
                mp[i] += diff;
                sum += diff;
                if (i + w < n) mp[i + w] -= diff;
            }
        }
    
        return true;
    }
  
    int maxMinHeight(vector<int> &arr, int k, int w) {
        int n = arr.size();
        
        int l = *min_element(arr.begin(), arr.end());
        int r = l + k;
        int ans = -1;
        
        while(l <= r){
            int mid = l + (r-l)/2;
            
            if(check(mid, arr, k, w)){
                ans = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        
        return ans;
    }
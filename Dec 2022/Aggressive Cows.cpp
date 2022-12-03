int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        int low = 1;
        sort(stalls.begin(), stalls.end());
        int high = stalls.back() - stalls.front();
        int ans = 0;
        while(low <= high){
            int mid = low + (high - low)/2;
            int cnt = 1;
            int curr = stalls[0];
            for(int i = 1; i < n && cnt < k; i++){
                if(stalls[i] >= curr + mid){
                    cnt++;
                    curr = stalls[i];
                }
            }
            if(cnt < k){
                high = mid - 1;
            }
            else{
                ans = max(mid, ans);
                low = mid + 1;
            }
        }
        return ans;
    }
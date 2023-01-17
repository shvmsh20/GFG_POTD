int totalWays(int n, vector<int>capacity) {
        // code here
        sort(capacity.begin(), capacity.end());
        uint64_t ans = 1;
        uint64_t mod = 1e9 + 7;
        for(int i = 0; i < n; i++){ 
            ans *= (capacity[i] - i) % mod;
            ans %= mod;
        }
        return ans;
    }
int minDaysBloom(vector<int>& arr, int k, int m) {
        // Code here
        int n = arr.size(), s = 0, e = 0;
        if((n / k) < m) return -1;
        for(int i = 0; i < n; i++) e = max(e, arr[i]);
        while(e > s + 1) {
            int t = (s + e) / 2, cnt = 0;
            for(int i = 0, c = 0; i < n; i++) {
                if(arr[i] <= t) c++;
                else c = 0;
                if(c == k) cnt++;
                if(c == k) c = 0;
            }
            if(cnt >= m) e = t;
            else s = t;
        }
        return e;
    }
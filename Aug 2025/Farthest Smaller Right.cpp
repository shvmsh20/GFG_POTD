vector<int> farMin(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<pair<int, int>> tmp(n);
        for(int i = 0; i < n; i++) tmp[i] = {arr[i], i};
        sort(tmp.begin(), tmp.end());
        vector<int> ans(n, -1);
        for(int i = 0, m = -1; i < n; i++) {
            if(m > tmp[i].second) ans[tmp[i].second] = m;
            m = max(m, tmp[i].second);
        }
        return ans;
    }
vector<int> sortArray(vector<int> &arr, int A, int B, int C) {
        // code here
        vector<int> res;
        int n = arr.size();
        for(int i=0; i<n; i++){
            int ans = (A*arr[i]*arr[i]) + (B*arr[i]) + C;
            res.push_back(ans);
        }
        sort(res.begin(), res.end());
        return res;
    }
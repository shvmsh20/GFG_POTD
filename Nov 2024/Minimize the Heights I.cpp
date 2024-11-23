int getMinDiff(int k, vector<int> &arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int mn, mx, res=arr[n-1]-arr[0];
        for(int i=1; i<n;i++){
            mx=max(arr[i-1]+k, arr[n-1]-k);
            mn=min(arr[0]+k, arr[i]-k);
            res = min(res, mx-mn);
        }
        return res;
    }
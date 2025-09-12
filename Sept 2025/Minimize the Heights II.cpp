int getMinDiff(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        int n = arr.size(), smallest = arr[0]+k, larget = arr[n-1]-k, mx=0, mn=0;
        // int res = arr[n-1]-arr[0];
        // sort(arr.begin(), arr.end());
        int res = arr[n-1]-arr[0];
        for(int i=0; i<n-1; i++){
            mx = max(larget, arr[i]+k);
            mn = min(smallest, arr[i+1]-k);
            if(mn<0){
                continue;
            }
            res = min(res, mx-mn);
        }
        return res;
    }
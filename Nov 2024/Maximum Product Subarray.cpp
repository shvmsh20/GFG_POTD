int maxProduct(vector<int> &arr) {
        // Your Code Here
        int n = arr.size();
        int res = arr[0];
        int mx = arr[0], mn = arr[0];
        for(int i=1; i<n; i++){
            if(arr[i]<0){
                int mx1 = max(arr[i], mn*arr[i]);
                int mn1 = min(arr[i], mx*arr[i]);
                mx = mx1;
                mn = mn1;
                res = max(res, mx);
            }else if(arr[i]>0){
                int mx1 = max(arr[i], mx*arr[i]);
                int mn1 = min(arr[i], mn*arr[i]);
                mx = mx1;
                mn = mn1;
                res = max(res, mx);
            }else{
                mx = 1;
                mn = 1;
            }
        }
        return res;
    }
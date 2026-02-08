int maxProduct(vector<int> &arr) {
        // code here
        int n = arr.size();
        int currMn = 1, currMx = 1, mx = arr[0];
        for(int i=0; i<n; i++){
            int newCurrMx = max(arr[i], 
            max(currMx*arr[i], currMn*arr[i]));
            mx = max(mx, newCurrMx);
            currMn = min(arr[i], 
            min(currMx*arr[i], currMn*arr[i]));
            currMx = newCurrMx;
        }
        return mx;
    }
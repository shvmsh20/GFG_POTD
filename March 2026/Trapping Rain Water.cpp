int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> left(n, 0), right(n, 0);
        int curr = arr[0];
        left[0] = arr[0];
        right[n-1] = arr[n-1];
        for(int i=1; i<n; i++){
            left[i] = curr;
            curr = max(curr, arr[i]);
        }
        curr = arr[n-1];
        for(int i=n-2; i>=0; i--){
            right[i] = curr;
            curr = max(curr, arr[i]);
        }
        int res = 0;
        for(int i=1; i<n-1; i++){
            int possWater = min(left[i], right[i])-arr[i];
            res+= possWater>0?possWater:0;
        }
        return res;
    }
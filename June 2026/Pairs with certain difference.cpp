int sumDiffPairs(vector<int>& arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        int n = arr.size(), res = 0;
        for(int i=n-1; i>=0; i--){
            if(i-1>=0 && arr[i]-arr[i-1]<k){
                res+= (arr[i]+arr[i-1]);
                i--;
            }
        }
        return res;
    }
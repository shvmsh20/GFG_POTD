int maxSubarraySum(vector<int> &arr) {
        // code here...
        int res = INT_MIN, curr = 0, n = arr.size();
        for(int i=0; i<n; i++){
            curr+= arr[i];
            res = max(res, curr);
            if(curr<0){
                curr = 0;
            }
        }
        return res;
    }
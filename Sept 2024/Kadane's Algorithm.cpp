long long maxSubarraySum(vector<int> &arr) {
        // code here...
        long long prefixSum = 0,  res = arr[0];
        for(int x: arr){
            prefixSum+= x;
            res = max(res, prefixSum);
            if(prefixSum<0){
                prefixSum = 0;
            }
        }
        return res;
    }
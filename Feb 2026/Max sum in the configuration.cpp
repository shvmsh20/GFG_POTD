int maxSum(vector<int> &arr) {
        // code here
        int n = arr.size();
        int currSum = 0, arrSum = 0;
        for(int i=0; i<n; i++){
            currSum+= (i*arr[i]);
            arrSum+= arr[i];
        }
        int res = currSum;
        for(int i=1; i<n; i++){
            currSum = currSum - (arrSum-arr[i-1]) + ((n-1)*arr[i-1]);
            res = max(res, currSum);
        }
        return res;
    }
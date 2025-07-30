int cntSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int, int> prefixSum;
        int n = arr.size(), currSum = 0, res = 0;
        for(int i=0; i<n; i++){
            currSum+= arr[i];
            if(currSum==k) res++;
            if(prefixSum.find(currSum-k)!=prefixSum.end()){
                res+= prefixSum[currSum-k];
            }
            prefixSum[currSum]++;
        }
        return res;
        
    }
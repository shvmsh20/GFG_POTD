int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int curr = 0, index = 0, n = arr.size();
        while(index<k){
            curr = curr ^ arr[index];
            index++;
        }
        int res = curr;
        while(index<n){
            curr = curr^arr[index-k];
            curr = curr^arr[index];
            res = max(res, curr);
            index++;
        }
        return res;
    }
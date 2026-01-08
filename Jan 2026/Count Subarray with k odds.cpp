int countSubarrays(vector<int>& arr, int k) {
        // code here
         unordered_map<int,int>mpp;
        int ans = 0, sum = 0;
        mpp[0] = 1;
        for(int i = 0;i<arr.size();i++){
            sum+=(arr[i] & 1);
            if(mpp.find(sum-k)!=mpp.end())ans+=mpp[sum - k];
            mpp[sum]++;
        }
        return ans;
    }
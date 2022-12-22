long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum=0, res=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(mp.find(sum)!=mp.end()){
                res+= mp[sum];
            }
            mp[sum]++;
        }
        return res;
    }
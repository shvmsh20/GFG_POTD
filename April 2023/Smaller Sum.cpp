vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
        map<int, vector<int>> mp;
        vector<long long> ans(n);
        for(int i =0 ;i < n; i++){
            mp[arr[i]].push_back(i);
        }
        long long sum = 0;
        for(auto &it: mp){
            for(auto &x : it.second){
                ans[x] = sum;
            }
            sum = sum + (it.first) * it.second.size();
        }
        return ans;
    }
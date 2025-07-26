vector<int> findMajority(vector<int>& arr) {
        // Code here
        vector<int> res;
        int n = arr.size();
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(pair<int, int> x: mp){
            if(x.second>n/3){
                res.push_back(x.first);
            }
        }
        if(res.size()>1){
            sort(res.begin(), res.end());
        }
        return res;
    }
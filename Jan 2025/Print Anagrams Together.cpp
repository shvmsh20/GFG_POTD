vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        unordered_map<string, int> mp;
        vector<vector<string>> res;
        for(string x: arr){
            string cpy = x;
            sort(cpy.begin(), cpy.end());
            if(mp.find(cpy)==mp.end()){
                mp[cpy] = res.size();
                res.push_back({x});
            }else{
                int index = mp[cpy];
                res[index].push_back(x);
            }
        }
        return res;
    }
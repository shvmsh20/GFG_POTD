bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        unordered_set<int> s;
        for(pair<int, int> x: mp){
            if(s.find(x.second)!=s.end()){
                return false;
            }
            s.insert(x.second);
        }
        return true;
    }
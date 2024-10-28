vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        vector<int> res;
        unordered_set<int> s;
        for(int i=0; i<arr.size(); i++){
            if(s.find(arr[i])==s.end()){
                s.insert(arr[i]);
                res.push_back(arr[i]);
            }
        }
        return res;
    }
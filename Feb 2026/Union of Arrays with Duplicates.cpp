vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        vector<int> res;
        unordered_set<int> s;
        for(int x: a){
            s.insert(x);
        }
        for(int x: b){
            s.insert(x);
        }
        for(auto it: s){
            res.push_back(it);
        }
        return res;
    }
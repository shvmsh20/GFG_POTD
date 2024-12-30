int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int> s;
        for(auto &i: a){
            s.insert(i);
        }
        for(auto &i: b){
            s.insert(i);
        }
        
        return s.size();
    }
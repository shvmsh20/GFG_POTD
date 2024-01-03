int smallestSubstring(string S) {
        // Code here
        unordered_map<int, int> mp;
        vector<int> lookUp = {-1, -1, -1};
        int res = INT_MAX;
        for(int j=0; j<S.size(); j++){
            lookUp[S[j]-'0'] = j;
            if(lookUp[0]!=-1 && lookUp[1]!=-1 && lookUp[2]!=-1){
                res = min(res, max(lookUp[0], max(lookUp[1], lookUp[2]))- min(lookUp[0], min(lookUp[1], lookUp[2])));
            }
        }
        return res==INT_MAX?-1:res+1;
    }
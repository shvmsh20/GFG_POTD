int maxCharGap(string &s) {
        // code here
        unordered_map<char, int> firstOcc;
        int n = s.size();
        for(int i=0; i<n; i++){
            if(firstOcc.find(s[i])==firstOcc.end()){
                firstOcc[s[i]] = i;
            }
        }
        int res = -1;
        for(int i=n-1; i>=0; i--){
            if(firstOcc[s[i]]!=i){
                res = max(res, i-firstOcc[s[i]]-1);
            }
        }
        return res;
    }
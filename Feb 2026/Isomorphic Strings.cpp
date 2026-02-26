bool areIsomorphic(string &s1, string &s2) {
        // code here
        unordered_map<char, char> s1Tos2;
        unordered_map<char, char> s2Tos1;
        int n = s1.size();
        for(int i=0; i<n; i++){
            if(s1Tos2.find(s1[i])==s1Tos2.end()){
                if(s2Tos1.find(s2[i])!=s2Tos1.end()){
                    return false;
                }
                s1Tos2[s1[i]] = s2[i];
                s2Tos1[s2[i]] = s1[i];
            }else if(s1Tos2[s1[i]]!=s2[i]){
                return false;
            }
        }
        return true;
    }
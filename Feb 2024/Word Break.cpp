 bool solve(int index, int n, string &s, unordered_set<string> &mp){
        if(index==n){
            return true;
        }
        string temp;
        for(int i = index; i<n; i++){
            temp+= s[i];
            if(mp.find(temp)!=mp.end() && solve(i+1, n, s, mp)){
                return true;
            }
        }
        return false;
    }
    int wordBreak(int n, string s, vector<string> &dictionary) {
        //code here
        unordered_set<string> mp;
        for(string x: dictionary){
            mp.insert(x);
        }
        int sz = s.length();
        return solve(0, sz, s, mp);
    }
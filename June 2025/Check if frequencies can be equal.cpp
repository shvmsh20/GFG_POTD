bool sameFreq(string& s) {
        // code here
        unordered_map<char, int> mp;
        for(char x: s){
            mp[x]++;
        }
        unordered_map<int, int> mp1;
        for(auto it: mp){
            mp1[it.second]++;
        }
        if(mp1.size()>2) return false;
        if(mp1.size()==1) return true;
        auto it = mp1.begin();
        int x = it->first, n = it->second;
        it++;
        int y = it->first, m = it->second;
        if(x<y && x==1 && n==1) return true;
        if(y<x && y==1 && m==1) return true;
        if(x>y && n==1 && x==y+1) return true;
        if(y>x && m==1 && y==x+1) return true;
        return false;
    }
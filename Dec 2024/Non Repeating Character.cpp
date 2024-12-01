char nonRepeatingChar(string &s) {
        // Your code here
        unordered_map<char, int> mp;
        int n = s.length();
        for(char x: s){
            mp[x]++;
        }
        for(auto x: s){
            if(mp[x]==1){
                return x;
            }
        }
        return '$';
    }
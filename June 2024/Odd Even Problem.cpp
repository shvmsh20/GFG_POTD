string oddEven(string s) {
        // code here
        unordered_map<char, int> mp;
        int n = s.size();
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        int x = 0, y = 0;
        for(char c = 'a'; c<='z'; c++){
            int index = (c-'a')+1;
            if(mp[c]==0){
                continue;
            }
            if(index%2==0 && mp[c]%2==0){
                y++;
            }
            if(index%2==1 && mp[c]%2==1){
                x++;
            }
        }
      
        x+= y;
        if(x&1){
            return "ODD";
        }else{
            return "EVEN";
        }
    }
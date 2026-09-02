int solve(int n, string s) {
        // code here
        int ans=0;
        unordered_map<char,int> mp;
        int used_laptops=0;
        for(int i=0;i<s.size();i++){
            char p=s[i];
            if(mp.find(p)!=mp.end() && mp[p]==1){
                mp[p]=0;
                used_laptops--;

            }
            if(mp.find(p)==mp.end()){

                mp[p]=1;
                used_laptops++;
                if(used_laptops>n){
                    ans++;
                    used_laptops=n;
                    mp[p]=0;
                }
            }

        }
        return ans;
    }
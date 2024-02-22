int subsequenceCount(string s, string t)
    {
      //Your code here
       int mod=1e9+7;
        unordered_map<string,int>mp;
        mp[""]=1;
        for(int i=0;i<s.size();i++)
        {
            string k=t;
            for(int j=t.size()-1;j>=0;j--)
            {
                
                if(t[j]==s[i])
                {
                    
                     string l=k;
                     l.pop_back();
                  
                     mp[k]=(mp[k]+mp[l])%mod;
                }
               k.pop_back();
            }
        }
        return mp[t]%mod;
    }
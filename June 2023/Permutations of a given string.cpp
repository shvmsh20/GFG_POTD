vector<string> store;
	    void solve(map<char,int> &mp,int pos,string res,int n){
	        if(pos==n){
	            store.push_back(res);
	            return;
	        }
	        for(auto m:mp){
	            if(m.second>0){
	                mp[m.first]--;
	                string s=res + m.first;
	                solve(mp,pos+1,s,n);
	                mp[m.first]++;
	            }
	        }
	    }
	    
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    map<char,int> mp;
		    for(char c:s) mp[c]++;
		    solve(mp,0,"",s.size());
		    return store;
		}
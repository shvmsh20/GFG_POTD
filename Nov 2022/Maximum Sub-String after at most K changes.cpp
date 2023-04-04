bool valid(unordered_map<char,int>&mp,int k)
		{
		    int mx=0,all=0;
		    for(auto val:mp)
		    {
		        mx=max(val.second,mx);
		        all+=val.second;
		    }
		    return (all-mx)<=k;
		}
		int characterReplacement(string s, int k){
		    // Code here
		    unordered_map<char,int> mp;
		    int start=0,ans=0,n=s.size();
		    for(int i=0;i<n;i++)
		    {
		        mp[s[i]]++;
		        while(!valid(mp,k))
		            mp[s[start++]]--;
		        ans=max(ans,i-start+1);
		    }
		    return ans;
		}
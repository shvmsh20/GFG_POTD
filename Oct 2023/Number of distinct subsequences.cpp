int distinctSubsequences(string s)
	{
	    // Your code goes here
	     int mod=1e9+7;
        int n=s.size();
        unordered_map<char,int>m;
        vector<int>dp(n+1);
        dp[0]=1;
        for(int i=1;i<=n;i++){
            dp[i]= (2*dp[i-1])%mod;
            char ch=s[i-1];
            if(m[ch]){
                int j=m[ch];
                dp[i]=(dp[i]-dp[j-1]+mod)%mod;
            }
            m[ch]=i;
        }
        return dp[n];
	}
vector<int> FactDigit(int n)
	{
	    // Code here
	    vector<int>ans;
    //vector<int>dp;
        int dp[9];
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=9;i++){
            dp[i]=i*dp[i-1];
        }
        for(int i=9;i>=1;i--){
            if(dp[i]<=n){
                n=n-dp[i];
                ans.push_back(i);
                i++;//for test case when n=4 
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    	}
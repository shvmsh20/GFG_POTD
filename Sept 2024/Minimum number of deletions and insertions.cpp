	public:
	int solve(int n, int m, string &s1, string &s2, vector<vector<int>> &dp){
	    if(n==0){
	        return m;
	    }
	    if(m==0){
	        return n;
	    }
	    if(dp[n][m]!=-1){
	        return dp[n][m];
	    }
	    int res = INT_MAX;
	    if(s1[n-1]==s2[m-1]){
	        res = solve(n-1, m-1, s1, s2, dp);
	    }else{
	        // insert in s1
	        res = min(res, 1+solve(n, m-1, s1, s2, dp));
	        // remove fron s1
	        res = min(res, 1+solve(n-1, m, s1, s2, dp));
	    }
	    return dp[n][m] = res;
	}
	int minOperations(string s1, string s2) 
	{ 
	    // Your code goes here
	    int n = s1.size(), m = s2.size();
	    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
	    return solve(n, m, s1, s2, dp);
	    
	} 
int minPoints(int m, int n, vector<vector<int>> points) 
	{ 
	    // Your code goes here
	    vector<vector<int>> dp(m,vector<int>(n));
        
        for(int i=m-1;i>=0;--i)
        {
            for(int j=n-1;j>=0;--j)
            {
                if(i==m-1 && j==n-1)
                    dp[i][j] = min(0,points[i][j]);
                else if(i==m-1)
                    dp[i][j] = min(0,points[i][j]+dp[i][j+1]);
                else if(j==n-1)     
                    dp[i][j] = min(0,points[i][j]+dp[i+1][j]);
                else
                    dp[i][j] = min(0,points[i][j]+max(dp[i][j+1],dp[i+1][j]));
            }
        }
        return abs(dp[0][0])+1;
	}
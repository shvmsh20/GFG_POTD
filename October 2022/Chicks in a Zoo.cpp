long long int dp[36];
	long long int NoOfChicks(int n){
	    // Code here
	    dp[0] = 0;
	    dp[1] = 1;
	    
        for (int i = 2; i <= 6; i++) {
            dp[i] = dp[i - 1] * 3;
        }
        
	    dp[7] = 3*dp[6] - 3*dp[1]; //There is no parent 
	    
	    //From day 8 there will be a parent which will die on the previous day
	    //and it's two child will die that day (so overall 2 out of 3 chicks will
	    //die on (n-6)th day . parent already have died only two kids are alive)

	    for(int i=8;i<=n;i++) dp[i] = (dp[i - 1] - (2 * dp[i - 6] / 3)) * 3;
	    
	    return dp[n];
	   
	}
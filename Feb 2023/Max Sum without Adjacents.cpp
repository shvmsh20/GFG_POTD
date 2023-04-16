int findMaxSum(int *a, int n) {
	    // code here
	     int dp[n][2];

     dp[0][0]=0;

        dp[0][1]=a[0];

        dp[1][0]=a[0];

        dp[1][1]=a[1];

        for(int i=2;i<n;i++){

            dp[i][0]=max(dp [i-2][1],dp[i-1][1]);

            dp[i][1]=max(dp[i-2][1]+a[i],dp[i-2][0]+a[i]);

        }

        return max(dp[n-1][0],dp[n-1][1]);
	}
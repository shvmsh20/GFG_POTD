int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<int> dp(n);
	    for(int i=0; i<n; i++){
	        dp[i] = arr[i];
	    }
	    int res = arr[0];
	    for(int i=1; i<n; i++){
	        for(int j=0; j<i; j++){
	            if(arr[i]>arr[j]){
	                dp[i] = max(dp[i], arr[i]+dp[j]);
	            }
	        }
	        res = max(res, dp[i]);
	    }
	    return res;
	}  
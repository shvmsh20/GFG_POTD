int solve(int index, int n, int *arr,vector<int> &dp){
	    if(index>=n){
	        return 0;
	    }
	    if(dp[index]!=-1){
	        return dp[index];
	    }
	    int sum1 = arr[index] + solve(index+2, n, arr, dp);
	    int sum2 = solve(index+1, n, arr, dp);
	    return dp[index] = max(sum1, sum2);
	}
	int findMaxSum(int *arr, int n) {
	    // code here
	    vector<int> dp(n, -1);
	    return solve(0, n, arr, dp);
	}
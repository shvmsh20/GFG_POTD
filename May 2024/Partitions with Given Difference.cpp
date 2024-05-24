int countSubsetSum(vector<int> &arr, int sum, int n, vector<vector<int>> &dp)
    {
        if(n == 0)  
        {
            if(sum == 0)    
            {
                //Number of elements in the array!=0 and the required sum is 0 then --->
                //All solution is possible so we return 1.
                //OR
                //Both number of elements in the array and the required sum is 0 then no problem we return 1.
                return 1;
            }
            //Number of elements in the array  is 0 and the required sum!=0 then --->
            //no solution is possible so we return 0.
            return 0;
        }
        if(dp[n][sum] != -1)    
        {
            return dp[n][sum];
        }
        if( arr[n-1] <= sum) 
        {
            //condition for including the current element in the subset.
            //if the current element has a value lesser than the sum of the elements.
            return dp[n][sum] = (countSubsetSum(arr,sum-arr[n-1],n-1,dp) % mod + countSubsetSum(arr,sum,n-1,dp) % mod) % mod;
        }
        //condition for not including the current element in the subset.
        return dp[n][sum] = countSubsetSum(arr,sum,n-1,dp) % mod;
    }
  public:
    int countPartitions(int n, int d, vector<int>& arr) {
        // Code here
        int sum = 0;
        for(int i=0;i<arr.size();i++)
        {
            //Sum of the array.
            sum+=arr[i];
        }
        //Let the two subsets be S1 and S2.
        //According to the question ---->
        
        // S1 - S2 = d
        // S1 + S2 = sum
        //Equating both the equations: 2S1 = d+sum.
        // S1 = (d+sum)/2.
        // S2 = sum-S1.
        int s = sum+d;
        if(s%2 != 0)
        {
            //if the total sum is odd partition is not possible. 
            return 0;
        }
        int s1 = ((s+1)/2)%mod;
        int s2 = sum-s1;
        vector<vector<int>> dp(n+1, vector<int>(s1+1, -1));
        //Just counting the subsets with a given sum value calculated.
        return countSubsetSum(arr, s1, n, dp);
    }
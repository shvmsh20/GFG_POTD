int findLIS(int index, int prevIndex, int n, vector<int> &nums, vector<vector<int>> &dp){
        if(index==n){
            return 0;
        }
        if(dp[index][prevIndex+1]!=-1){
            return dp[index][prevIndex+1];
        }
        int notake = findLIS(index+1, prevIndex, n, nums, dp);
        int take = 0;
        if(prevIndex==-1 || (nums[index]>nums[prevIndex] && index-prevIndex<=nums[index]-nums[prevIndex])){
            take = 1+findLIS(index+1, index, n, nums, dp);
        }
        return dp[index][prevIndex+1] = max(take, notake);
        
    }
    int min_operations(vector<int>& nums) {
        // Code here
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(n, -1));
        int lis = findLIS(0, -1, n, nums, dp);
        return n-lis;
    }
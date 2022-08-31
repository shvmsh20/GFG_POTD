set<int>s;
   void sumSeq(int i , vector<int>&nums,vector<vector<bool>>&dp,int sum){
       if(i==nums.size()){
           s.insert(sum);
           return;
       }
       
       if(dp[i][sum]==true) return ;  
       
       sumSeq(i+1, nums,dp, sum+nums[i]);  // Pick
       
       sumSeq(i+1, nums, dp, sum);   // Not Pick
       
       dp[i][sum] = true;
   }
public:
vector<int> DistinctSum(vector<int>nums){
    // Code here
    vector<int>ans;
    int n = nums.size();
    
    int sum = 0;
    for(auto i : nums)
    sum += i;
    
    vector<vector<bool>>dp(n+1, vector<bool>(sum+1, false));
    sumSeq(0, nums, dp,0);
    
    for(auto i : s){
        ans.push_back(i);
    }
    return ans;
}
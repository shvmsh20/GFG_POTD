vector<long long int> productExceptSelf(vector<long long int>& nums) {

        // code here
        vector<long long int>ans;
        
        long long int prefix =1;
        for(int i = 1;i<nums.size();i++) prefix *=nums[i];  // for first element
   
        ans.push_back(prefix);
        
        prefix =1;
        for(int i = 1;i<nums.size();i++)
        {
            prefix *=nums[i-1];
            long long int suffix =1;
            
            for(int  j = i+1;j<nums.size();j++)
            {
                suffix *=nums[j];
            }
            ans.push_back(prefix * suffix);
            
        }
        return ans;
    }
vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        sort(nums.begin(),nums.end());
        vector<int> v;
        int ct=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) ct++;
            else{
                if(ct==0) v.push_back(nums[i]);
                ct=0;
            }
        }
        if(nums[nums.size()-1]!=nums[nums.size()-2]) 
                v.push_back(nums[nums.size()-1]);
        return v;
    }
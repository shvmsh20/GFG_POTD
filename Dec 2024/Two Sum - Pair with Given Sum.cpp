bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_map<int,int> u;
        for(int i:arr)
        {
            if(u.find(target-i)!=u.end())
            return true;
            else
            u[i]++;
        }
        return false;
}

vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int>ans;
        int curr_sum = arr[0], start = 0;
        
        for(int i=1;i<=n;i++){
            
            while(curr_sum > s && start < i-1){
                curr_sum = curr_sum-arr[start];
                start++;
            }
            if(curr_sum == s){
                ans.push_back(start+1);
                ans.push_back(i);
                return ans;
            }
            if(i < n){
                curr_sum = curr_sum+arr[i];
            }
        }
        ans.push_back(-1);
        return ans;
    }
bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set<int> s;
        int pre_sum=0;
        for(int i=0;i<n;i++){
            pre_sum+=arr[i];
            if(pre_sum==0) return true;
            if(s.find(pre_sum)!=s.end()){
                return true;
            }
            s.insert(pre_sum);
        }
        return false;
    }
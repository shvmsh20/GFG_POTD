 bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
         int n=arr.size();
        vector<bool> prev(sum+1,false);
        vector<bool> curr(sum+1,false);
        prev[0]=true;
        for(int ind=1;ind<=n;ind++){
            for(int s=0;s<=sum;s++){
                if(s==0){
                    curr[s]=true;
                    continue;
                }
                bool notTake=prev[s];
                bool take=false;
                if(s>=arr[ind-1]) take=prev[s-arr[ind-1]];
                bool ans=take|notTake;
                curr[s]=ans;
            }
            prev=curr;
        }
        return prev[sum];
    }
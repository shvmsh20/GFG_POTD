bool solve(int ind, int n, int k, int targetSum, int a[], vector<int> &v){
        if(ind==n){
            return true;
        }
        for(int i=0; i<k; i++){
            if(v[i]+a[ind]<=targetSum){
                v[i] = v[i]+a[ind];
                if(solve(ind+1, n, k, targetSum, a, v)){
                    return true;
                }
                v[i] = v[i]-a[ind];
            }
        }
        return false;
    }
    bool isKPartitionPossible(int a[], int n, int k)
    {
         //Your code here
         int sum=0;
         for(int i=0; i<n; i++){
             sum+= a[i];
         }
         if(sum%k!=0){
             return false;
         }
         int targetSum = sum/k;
         sort(a, a+n, greater<int>());
         vector<int> v(k, 0);
         return solve(0, n, k, targetSum, a, v);
    }
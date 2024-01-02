long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        long long sum = 0;
        vector<long long> maxSum(n);
        for(int i=0; i<n; i++){
            sum+= a[i];
            maxSum[i] = sum;
            if(sum<0){
                sum = 0;
            }
        }
        long long currSum = 0;
        for(int i=0; i<k; i++){
            currSum+= a[i];
        }
        long long res = currSum;
        for(int i=k; i<n; i++){
            currSum+=a[i];
            currSum-=a[i-k];
            res = max(res, currSum);
            if(currSum+maxSum[i-k]>res){
                res = currSum+maxSum[i-k];
            }
        }
        return res;
    }
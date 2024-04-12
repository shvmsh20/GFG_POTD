long long pairAndSum(int n, long long arr[]) {
        // code here
        long long  ans =0;
        for(int i = 0; i < 32; i++){
            long long  k = 0;
            for(int j = 0; j < n; j++){
                //checking no of set bit 
               if((arr[j] & (1 << i)) != 0 )
                 k++;
            }
            ans += (1<< i)*((k) * (k -1)) >> 1;
        }
        return ans;
    }
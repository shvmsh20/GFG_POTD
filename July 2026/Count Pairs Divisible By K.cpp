int countKdivPairs(vector<int>& arr, int k) {
        // code here
         vector<long long>freq(k,0);
        
        long long ans=0;
        
        
        for(int x:arr)
        {
            int rem=x%k;
            int need = (k-rem)%k;
            ans+=freq[need];
            freq[rem]++;
        }
        
    return ans;
    }
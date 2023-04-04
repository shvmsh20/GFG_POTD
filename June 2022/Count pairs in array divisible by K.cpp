long long countKdivPairs(int a[], int n, int k)
    {
        //code here
        unordered_map<int, int> mp;
        long long  count=0;
        for(int i=0; i<n; i++){
            int rem = a[i]%k;
            if(rem==0 && mp.find(0)!=mp.end()){
                count+= mp[0];
            }else if(mp.find(k-rem)!=mp.end()){
                count+= mp[k-rem];
            }
            mp[rem]++;
        }
        return count;
    }   
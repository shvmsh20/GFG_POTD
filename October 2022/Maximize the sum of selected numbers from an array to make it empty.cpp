int maximizeSum(int arr[], int n) 
    {
        // Complete the function
        int res=0;
        vector<int> mp(100001);
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(int i=n-1; i>=0; i--){
            int curr = arr[i];
            if(mp[curr]!=0){
                res+=curr;
                mp[curr]--;
                if(mp[curr-1]!=0){
                    mp[curr-1]--;
                }
            }
        }
        return res;
    }

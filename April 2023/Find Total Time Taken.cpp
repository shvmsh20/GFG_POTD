int totalTime(int n, vector<int> &arr, vector<int> &time) {
        // code here
        unordered_map<int,int>mp;
        for(auto it:arr)
            mp[it]++;
        int res=0;
        for(int i=n-1;i>0;i--){
            if(mp[arr[i]]-->1){
                res+=time[arr[i]-1];
            }
            else
                res++;
        }
        return res;
    }
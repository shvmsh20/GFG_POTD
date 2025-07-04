int countAtMostK(vector<int> &arr, int k) {
        // code here
        int ans=0;
        unordered_map<int,int> mp;
        int j=0;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
            while(mp.size()>k){
                mp[arr[j]]--;
                if(mp[arr[j]]==0) mp.erase(arr[j]);
                j++;
            }
            ans+=i-j+1;
        }
        return ans;
    }
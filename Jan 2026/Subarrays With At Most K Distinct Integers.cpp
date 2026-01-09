int countAtMostK(vector<int> &arr, int k) {
        // code here
         int n=arr.size();
        
        int i=0, j=0, ans=0;
        
        unordered_map<int, int>mpp;
        
        for(; j<n; j++){
            mpp[arr[j]]++;
            for(; i<n && mpp.size()>k; i++){
                mpp[arr[i]]--;
                if(mpp[arr[i]]==0) mpp.erase(arr[i]);
            }
            ans+=(j-i+1);
        }
        
        return ans;
    }
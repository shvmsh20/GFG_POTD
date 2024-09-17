int getMinDiff(vector<int> &arr, int k) {
        // code here
         sort(arr.begin(),arr.end());
        
        int ans=arr.back()-arr[0];
        int mini=0;
        int maxi=0;
        
        for(int i=1;i<arr.size();i++){
            if(arr[i]-k<0)
            continue;
            mini=min(arr[0]+k,arr[i]-k);
            maxi=max(arr.back()-k,arr[i-1]+k);
            ans=min(ans,maxi-mini);
        }
        return ans;
    }
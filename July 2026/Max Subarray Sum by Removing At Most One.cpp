#define ll long long
  
    int maxSumSubarray(vector<int>& arr) {
        // code here
        int n=arr.size();
        ll ans=arr[0];
        ll prevNoDelete=arr[0];
        ll prevOneDelete=-1e9;
        
        for(int i=1; i<n; i++){
            ll currNoDelete=max(arr[i]*1LL, prevNoDelete+arr[i]);
            ll currOneDelete=max(prevOneDelete+arr[i], prevNoDelete*1LL);
            
            ans=max({ans, currNoDelete, currOneDelete});
            prevNoDelete=currNoDelete;
            prevOneDelete=currOneDelete;
        }
        
        return ans;
        
    }
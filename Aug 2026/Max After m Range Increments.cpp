int findMax(int n, vector<int>& a, vector<int>& b, vector<int>& k) {
        // code here
        int m = a.size();
        vector<int> arr(n+1,0);
        for(int i = 0;i<m;i++)
        {
            arr[a[i]] +=k[i];
            arr[b[i]+1]-=  k[i];
        }
       int ans = arr[0];
        for(int i = 1;i<n;i++)
        {
            arr[i] = arr[i] + arr[i-1];
            ans = max(ans,arr[i]);
            
        }
        return ans;
    }
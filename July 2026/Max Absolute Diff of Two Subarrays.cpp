int maxDiffSubArrays(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int>suff(n) , suff1(n);
        int curr = 0 , mn = INT_MAX , curr1  = 0, mx = INT_MIN ;
        for(int i = n-1 ; i>=0 ; i--){
            curr+=arr[i];
            curr1+=arr[i];
            mn = min(mn , curr);
            suff[i] = mn;
            if(curr > 0)curr = 0;
            mx = max(mx , curr1);
            suff1[i] = mx;
            if(curr1 <0)curr1 = 0;
        }
        int ans = INT_MIN ;
        curr = 0 , mn = INT_MAX , curr1  = 0, mx = INT_MIN ;
        for(int i = 0 ; i<n-1 ; i++){
            curr+=arr[i];
            curr1+=arr[i];
            mn = min(mn , curr);
            ans = max(ans , abs(mn - suff1[i+1]));
            if(curr > 0)curr = 0;
            mx = max(mx , curr1);
            ans = max(ans , abs(mx - suff[i+1]));
            if(curr1 <0)curr1 = 0;
        }
        return ans;
    }
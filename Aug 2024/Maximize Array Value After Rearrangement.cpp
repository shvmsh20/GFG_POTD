int Maximize(vector<int> &arr) {
        // Complete the function
        sort(arr.begin(), arr.end());
        long long int ans = 0;
        int mod = 1000000007;
        int n = arr.size();
        for(long long int i=0; i<n; i++){
            int temp = ((arr[i]%mod)*(i%mod))%mod;
            temp = temp%mod;
            ans = (ans+temp)%mod;
        }
        return ans;
    }
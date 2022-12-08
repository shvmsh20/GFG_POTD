vector<int> threeDivisors(vector<long long> nums, int n)
    {
        // Write your code here
        long long m = nums[0], cur = 0;
        for(int i = 1; i < n; i++)
            m = max(m, nums[i]);
        vector<int> dp(m + 1), res(n);
        dp[1] = 1;
        for (long long i = 2; i <= m; i++) {
            long long k = i;
            while (k <= m) {
                dp[k]++;
                k += i;
            }
        }
        for (long long i = 0; i <= m; i++) {
            if (dp[i] == 2)
                cur++;
            dp[i] = cur;
        }
        for (int i = 0; i < n; i++) {
            res[i] = dp[nums[i]];
        }
        return res;
    }
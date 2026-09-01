int palindromicStrings(int n, int k) {
        // code here
        const long long MOD = 1000000007LL;
        long long ways = 1;
        long long ans = 0;

        for (int len = 1; len <= n; ++len) {
            if (len % 2 == 1) {
                int pairs = len / 2;

                ans = (ans + ways * (k - pairs)) % MOD;
            } else {
                int pairs = len / 2;

                ways = (ways * (k - pairs + 1)) % MOD;

                ans = (ans + ways) % MOD;
            }
        }

        return (int)ans;
    }
int getCount(int n) {
        // code here
        int ans = 0;
        for (int k = 2; k * (k + 1) / 2 <= n; k++) {
            int num = n - k * (k - 1) / 2;
            if (num > 0 && num % k == 0)
                ans++;
        }
        return ans;
    }
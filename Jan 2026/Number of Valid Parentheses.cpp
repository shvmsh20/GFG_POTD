int solve(int open, int close) {
        if(open < 0 || close < 0 || open > close) return 0;
        if(open == 0 && close == 0) return 1;
        return solve(open - 1, close) + solve(open, close - 1);
    }
    int findWays(int n) {
        if(n & 1) return 0;
        int k = n / 2;
        return solve(k, k);
    }
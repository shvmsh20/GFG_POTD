 int minSquares(int n, int m) {
        // code here
        int ans = 0;

                    while (n > 0 && m > 0) {
                        if (n < m)
                            swap(n, m);

                        ans += n / m;
                        n = n % m;
                    }

                    return ans;
    }
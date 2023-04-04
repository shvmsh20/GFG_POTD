int swapBits(int x, int p1, int p2, int n)
    {
        // Code Here
        unsigned int a = (x>>p1) & ((1U << n)-1);
        unsigned int b = (x>>p2) & ((1U << n)-1);
        unsigned int c = a^b;
         c = (c<<p1) | (c<<p2);
        unsigned int ans = x^c;
        return ans;
    }
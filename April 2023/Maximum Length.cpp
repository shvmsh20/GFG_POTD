int solve(int a, int b, int c) {
        // code here
        int maxi = max(a,max(b,c));
        if(maxi<=2*(a+b+c-maxi+1))
        {
            return (a+b+c);
        }
        return -1;
    }
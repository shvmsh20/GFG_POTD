 vector<int>dp;
    int f(int n){
        if(dp[n]!=-1)return dp[n];
        if(n<=5)return n;
        int m1=max(n/2,f(n/2));
        int m2=max(n/3,f(n/3));
        int m3=max(n/4,f(n/4));
        return dp[n]=max(n,m1+m2+m3);
    }
    int maxSum(int n) {
        // code here.
        dp=vector<int>(n+1,-1);
        return f(n);
    }
int sumOfNaturals(int n) {
        // code here
        int mod=1e9+7;
        int ans = ((((long)n*(long)(n+1))%mod)*500000004)%mod;
        // 500000004 -> Modular Inverse of 2
        return ans;
    }
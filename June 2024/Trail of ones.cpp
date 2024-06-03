int numberOfConsecutiveOnes(int n) {
        // code here
          if(n==2)return 1;
        int a=0,b=1,ans=1,mod=1e9+7;
        for(int i=3; i<=n; i++){
            int c=(a+b)%mod;
            a=b;
            b=c;
            ans=((ans*2)%mod+c)%mod;
        }
        return ans;
    }
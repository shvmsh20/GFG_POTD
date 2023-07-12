#define mod 1000000007

    long long power(int N,int R)

    {

       //Your code here

        if(N==0)

        return 0;

        if(R==0)

        return 1;

        long long ans=power(N,R/2);

        if(R%2==0)

        return (ans%mod * ans%mod)%mod;

        else

        return (ans%mod * ans%mod * N%mod)%mod;

    }
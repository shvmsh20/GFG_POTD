int getSum(int X, int Y, int Z) {
        // Your code goes here
        int r1,r2,r3;

        r1=max(2,X+1);r2=max(2,Y+1);r3=max(2,Z+1);

        int f[r1][r2][r3];

        int g[r1][r2][r3];

        long long int t1;

        int m[181];

        m[0]=0;m[1]=10;

        for(int i=2;i<181;++i)

        {

            t1=(long long)m[i-1]*10;

            m[i]=t1%1000000007;

        }

        f[0][0][0]=0;

        g[0][0][0]=0;

        f[1][0][0]=4;

        f[0][1][0]=5;

        f[0][0][1]=6;

        g[1][0][0]=1;

        g[0][1][0]=1;

        g[0][0][1]=1;

        for(int i=2;i<X+1;++i)

        {

            g[i][0][0]=1;

            t1=((long long)4)*m[i-1]*g[i-1][0][0];

            f[i][0][0]=(t1%1000000007+f[i-1][0][0])%1000000007;

        }

        for(int i=2;i<Y+1;++i)

        {

            g[0][i][0]=1;

            t1=((long long)5)*m[i-1]*g[0][i-1][0];

            f[0][i][0]=(t1%1000000007+f[0][i-1][0])%1000000007;

            

        }

        for(int i=2;i<Z+1;++i)

        {

            g[0][0][i]=1;

            t1=((long long)6)*m[i-1]*g[0][0][i-1];

            f[0][0][i]=(t1%1000000007+f[0][0][i-1])%1000000007;

        }

        for(int j=1;j<Y+1;++j)

        {

            for(int i=1;i<X+1;++i)

            {

                g[i][j][0]=((long long)g[i-1][j][0]+g[i][j-1][0])%1000000007;

                t1=((long long)4)*m[i+j-1]*g[i-1][j][0];

                f[i][j][0]=t1%1000000007;

                f[i][j][0]=((long long)f[i][j][0]+(f[i-1][j][0]%1000000007))%1000000007;

                t1=((long long)5)*m[i+j-1]*g[i][j-1][0];

                t1%=1000000007;

                f[i][j][0]+=t1;

                f[i][j][0]=((long long)f[i][j][0]+(f[i][j-1][0]%1000000007))%1000000007;

            }

        }

        for(int j=1;j<Y+1;++j)

        {

            for(int i=1;i<Z+1;++i)

            {

                g[0][j][i]=((long long)g[0][j][i-1]+g[0][j-1][i])%1000000007;

                t1=((long long)6)*m[i+j-1]*g[0][j][i-1];

                f[0][j][i]=t1%1000000007;

                f[0][j][i]=((long long)f[0][j][i]+(f[0][j][i-1]%1000000007))%1000000007;

                t1=((long long)5)*m[i+j-1]*g[0][j-1][i];

                t1%=1000000007;

                f[0][j][i]+=t1;

                f[0][j][i]=((long long)f[0][j][i]+(f[0][j-1][i]%1000000007))%1000000007;

            }

        }

        for(int j=1;j<Z+1;++j)

        {

            for(int i=1;i<X+1;++i)

            {

                g[i][0][j]=((long long)g[i-1][0][j]+g[i][0][j-1])%1000000007;

                t1=((long long)4)*m[i+j-1]*g[i-1][0][j];

                f[i][0][j]=t1%1000000007;

                f[i][0][j]=((long long)f[i][0][j]+(f[i-1][0][j]%1000000007))%1000000007;

                t1=((long long)6)*m[i+j-1]*g[i][0][j-1];

                t1%=1000000007;

                f[i][0][j]+=t1;

                f[i][0][j]=((long long)f[i][0][j]+(f[i][0][j-1]%1000000007))%1000000007;

            }

        }

        // 

        for(int j=1;j<Y+1;++j)

        {

            for(int k=1;k<Z+1;++k)

            {

                for(int i=1;i<X+1;++i)

                {

                    g[i][j][k]=((long long)g[i-1][j][k]+g[i][j-1][k]+g[i][j][k-1])%1000000007;

                    t1=((long long)4)*m[i+j+k-1]*g[i-1][j][k];

                    f[i][j][k]=t1%1000000007;

                    f[i][j][k]=((long long)f[i][j][k]+(f[i-1][j][k]%1000000007))%1000000007;

                    t1=((long long)5)*m[i+j+k-1]*g[i][j-1][k];

                    f[i][j][k]+=t1%1000000007;

                    f[i][j][k]=((long long)f[i][j][k]+(f[i][j-1][k]%1000000007))%1000000007;

                    t1=((long long)6)*m[i+j+k-1]*g[i][j][k-1];

                    f[i][j][k]+=t1%1000000007;

                    f[i][j][k]=((long long)f[i][j][k]+(f[i][j][k-1]%1000000007))%1000000007;

                    

                }

            }

        }

        int c=0;

        for(int j=0;j<Y+1;++j)

        {

            for(int k=0;k<Z+1;++k)

            {

                for(int i=0;i<X+1;++i)

                {

                    c=((long long)c+f[i][j][k])%1000000007;

                }

            }

        }

        return c;
    }
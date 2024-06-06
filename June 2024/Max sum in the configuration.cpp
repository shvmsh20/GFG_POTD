long long max_sum(int a[], int n) {
        // Your code here
        long long sum=0,org=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            org+=(i*1LL*a[i]);
        }

        long long max=org;

        for(int i=0;i<n;i++)
        {
            org+=sum-(1LL*a[n-i-1]*n);
            if(org>=max) max=org;
        }

        return max;
    }
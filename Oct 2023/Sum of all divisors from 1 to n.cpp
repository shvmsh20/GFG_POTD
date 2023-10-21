long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long sum=0;
        for(int i=1;i<=N;i++){
            long long p=N/i;
            sum+=(p*i);
        }
        return sum;
    }
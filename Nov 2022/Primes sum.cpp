bool isPrime(int n)
    {
        if(n==1 || n==2 || n==3)
        {
            return true; 
        }
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    string isSumOfTwo(int N){
        // code here
        for(int i=2;i<N;i++)
        {
            if(isPrime(i) && isPrime(N-i))
            {
                return "Yes";
            }
        }
        return "No";
    }
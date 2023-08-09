bool isPrime(int n){
        for(int i =2; i<= sqrt(n); i++){
            if(n%i == 0)
                return false;
        }
        return true;
    }
    long long int largestPrimeFactor(int N){
        // code here
        long long int divisor = INT_MIN;
        int temp = N;
        for(int i= 2; i<= temp; i++){
            if(temp%i == 0 && isPrime(i)){
                divisor = i;
                temp = temp/i;
            }
        }
        return divisor;
    }
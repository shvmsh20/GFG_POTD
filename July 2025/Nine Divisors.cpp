int countNumbers(int N) {
        // Code Here
         long long int count=0;
        long long int limits  = sqrt(N)+1;
        vector<long long int> primes;
        vector<bool> chck(limits+1, true);
        for(long long int i=2; i<=limits; i++){
            if(chck[i]){
                primes.push_back(i);
                for(long long int j=i*i; j<=limits; j+= i){
                    chck[j] = false;
                }
            }
        }
        long long int n = primes.size();
        for(long long int i=0; i<n; i++){
            if(pow(primes[i], 8)<=N){
                count++;
            }
            for(long long int j=i+1; j<n; j++){
                if(pow(primes[i], 2)*pow(primes[j], 2)<=N){
                    count++;
                }else{
                    break;
                }
            }
        }
        return count;
    }
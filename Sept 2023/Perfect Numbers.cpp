int isPerfectNumber(long long N) {
        // code here
        long long res = 0;
        for(long long i=1; i<=sqrt(N) && i<N; i++){
            if(N%i==0){
                if(i!=1 && i!=sqrt(N)){
                    res+= i;
                    res+= N/i;
                }else{
                    res+= i;
                }
                
            }
        }
        if(res==N){
            return 1;
        }else{
            return 0;
        }
    }
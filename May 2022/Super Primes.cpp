int superPrimes(int n)
	{
	    
	    vector<bool> prime(n+1, true);
	    for(int i=2; i*i<=n; i++){
	        if(prime[i]){
	            for(int j=i*i; j<=n; j=j+i){
	                prime[j] = false;
	            }
	        }
	    }
	    int res=0;
	    for(int i=5; i<=n; i++){
	        if(prime[i] && prime[i-2]){
	            res++;
	        }
	    }
	    return res;
	    
	}
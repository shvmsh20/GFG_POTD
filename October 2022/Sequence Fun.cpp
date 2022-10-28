int NthTerm(int n){
		    // Code  her
		    long long res = 2;
		    for(int i=2; i<=n; i++){
		        res = (((res *i)%mod)+1)%mod;
		    }
		    return res;
		}
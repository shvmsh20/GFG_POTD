bool check(int n){
	    if(n<=1)return false;
	    for(int i=2;i*i<=n;i++){
	        if(n%i==0)return false;
	    }
	    return true;
	}
	int NthTerm(int N){
	    // Code here
	    int dif=0;
	    while(!(check(N-dif)||check(N+dif)))dif++;
	    return dif;
	}
void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int i=0, j=n-1;
    	long long me = LLONG_MIN;
    	for(int i=0; i<n; i++){
    	    me = max(me, arr[i]);
    	}
    	me++;
    	for(int k=0; k<n; k++){
    	    long long val;
    	    if(k%2==0){
    	        val = arr[k]+(arr[j]%me)*me;
    	        j--;
    	    }else{
    	        val = arr[k]+(arr[i]%me)*me;
    	        i++;
    	    }
    	    arr[k] = val;
    	}
    	for(int i=0; i<n; i++){
    	    arr[i] = arr[i]/me;
    	}
    	 
    }
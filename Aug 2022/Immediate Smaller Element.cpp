void immediateSmaller(int *arr, int n) {
	    //  code here
	    for(int i=0; i<n; i++){
	        if(i==n-1 || arr[i]<=arr[i+1]){
	            arr[i] = -1;
	            
	        }else{
	            arr[i] = arr[i+1];
	        }
	    }
	}
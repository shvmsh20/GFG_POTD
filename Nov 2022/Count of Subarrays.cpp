ll countSubarray(int arr[], int n, int k) {
	    // code here
	    int l=0,r=0;
	    long long ans=0;
	    while(r<n){
	        if(arr[r]>k){
	            ans+=(r-l+1)*(n-r);
	            l=r+1;
	        }
	        r++;
	    }
	    return ans;
	}
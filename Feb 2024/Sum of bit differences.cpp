long long sumBitDifferences(int arr[], int n) {
	    // code here
	     long long ans = 0;
	   
	   for(int i = 0;i<32;i++){
	       
	       long long count = 0;
	       
	       for(int j = 0;j<n;j++){
	           // at each position find the set bit
	           if(arr[j]&(1<<i))count++;
	           
	       }
	       ans+=count*(n-count)*2;
	   }
	   return ans;
	}
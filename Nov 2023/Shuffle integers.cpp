oid shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	    int a=0;
	    int b=n/2;
	    int mod=3001;
	    for(int i=0;i<n;i++)
	    {
	        arr[i]+=(arr[a++]%mod)*mod;
	        i++;
	        arr[i]+=(arr[b++]%mod)*mod;
	    }
	    for(int i=0;i<n;i++)
	    {
	        arr[i]=arr[i]/mod;
	    }
	}
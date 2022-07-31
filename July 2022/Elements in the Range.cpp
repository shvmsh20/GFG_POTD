bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		unordered_map<int, int> mp;
		for(int i=0; i<n; i++){
		    if(A<=arr[i] && arr[i]<=B){
		        mp[arr[i]]++;
		    }
		
	    }
	return mp.size()==(B-A+1);
	}
int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    unordered_map<int, int> mp;
	    long int prefix_sum=0;
	    int res=0;
	    for(int i=0; i<n; i++){
	        prefix_sum+=arr[i];
	        if(prefix_sum%k==0){
	            res = i+1;
	        }else{
	            int rem = (prefix_sum%k+k)%k;
	            if(mp.find(rem)!=mp.end()){
	                int temp = i-mp[rem];
	                res = max(res, temp);
	            }else{
	                mp[rem] = i;
	            }
	        }
	    }
	    return res;
	}
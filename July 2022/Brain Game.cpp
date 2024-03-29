bool brainGame(vector<int>nums) {
        // Code here.
        vector<int>a(1005);
    	for(int i = 2; i<= 1000; i++){
    		for(int j = 2*i; j <= 1000; j+=i)
    			a[j] = max(a[j], 1 + a[i]);
    	}
    	int x = 0;
    	for(int i = 0; i < nums.size(); i++){
    		x = x ^ a[nums[i]];
    	}
    	if(x == 0)
    		return false;
    	return true;
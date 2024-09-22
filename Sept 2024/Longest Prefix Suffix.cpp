int lps(string s) {
        // Your code goes here
        int n = s.size();
	    vector<int> LPS(n, 0);
	    int len=0, i=1;
	    while(i<n){
	        if(s[len]==s[i]){
	            LPS[i] = len+1;
	            len++;
	            i++;
	        }else{
	            if(len==0){
	                LPS[i] = 0;
	                i++;
	            }else{
	                len = LPS[len-1];
	            }
	        }
	    }
	    
	    return LPS[n-1];
    }
string addBinary(string first, string sec)
	{
	    // your code here
	    string ans = "";
	    
	    int carry = 0;
	    
	    int i = first.size() - 1, j = sec.size() - 1;
	    
	    while(i >= 0 && j >= 0) {
	        if(first[i] == '1' && sec[j] == '1') {
	            if(carry) {
	                ans.push_back('1');
	            }
	            else {
	                ans.push_back('0');
	                carry = 1;
	            }
	        } 
	        else if( (first[i] == '1' && sec[j] == '0') || (first[i] == '0' && sec[j] == '1') ) {
	            if(carry) {
	                ans.push_back('0');
	                carry = 1;
	            }
	            else {
	                ans.push_back('1');
	            }
	        } 
	        else if(first[i] == '0' && sec[j] == '0') {
	            if(carry) {
	                ans.push_back('1');
	                carry = 0;
	            } else {
	                ans.push_back('0');
	            }
	        }
	        --i, --j;
	    }
	    
	    
	    while(i >= 0) {
	        if(carry && first[i] == '1') {
	            ans.push_back('0');
                carry = 1;
	        } 
	        else if(carry && first[i] == '0') {
	            ans.push_back('1');
                carry = 0;
	        } 
	        else {
	            ans.push_back(first[i]);
	        }
	        --i;
	    }
	    
	    while(j >= 0) {
	        if(carry && sec[j] == '1') {
	            ans.push_back('0');
                carry = 1;
	        } 
	        else if(carry && sec[j] == '0') {
	            ans.push_back('1');
                carry = 0;
	        } 
	        else {
	            ans.push_back(sec[j]);
	        }
	        --j;
	    }
	    
	    if(carry)
	        ans.push_back('1');
	        
        
        while(ans.size() > 1 && ans.back() == '0')
            ans.pop_back();
        
        reverse(ans.begin(), ans.end());
        
	    return ans;
	}
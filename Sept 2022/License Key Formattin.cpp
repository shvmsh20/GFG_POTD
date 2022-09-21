string ReFormatString(string S, int k){
    	int n = 0;
    	for(int i=0; i<S.length(); i++){
    	    if(S[i]!='-'){
    	        n++;
    	    }
    	}
    	int rem = n%k;
    	string first;
    	int count=0;
    	int i=0;
    	while(i<S.length() && count<rem){
    	    if(S[i]=='-'){
    	        i++;
    	    }else{
    	        if(S[i]>='a' && S[i]<='z'){
    	            first+= char('A'+S[i]-'a');
    	        }else{
    	            first+=S[i];
    	            
    	        }
    	        i++;
    	        count++;
    	        
    	    }
    	}
    	string res;
    	for(i; i<S.length(); i++){
    	    int count=0;
    	    string temp;
    	    while(i<S.length() && count<k){
    	        if(S[i]=='-'){
    	            i++;
    	            continue;
    	        }
    	        if(S[i]>='a' && S[i]<='z'){
    	            temp+= char('A'+S[i]-'a');
    	        }else{
    	            temp+=S[i];
    	            
    	        }
    	        i++;
    	        count++;
    	    }
    	    if(temp.size()==k){
    	        res+=temp;
    	        res+='-';
    	    }
    	    
    	    i--;
    	}
    	if(!first.empty()){
    	    res = first+'-'+res;
    	}
    	if(!res.empty()) res.pop_back();
    	
    	return res;
    }
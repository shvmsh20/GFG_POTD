string digitsNum(int N)
	{
	    // Code here.
	    int n = N;
	    string res;
	    while(N--){
	        res+='0';
	    }
	    while(n>=0){
	        if(n>9){
	            res ='9'+res;
	            n-=9;
	        }else{
	            res = to_string(n)+ res;
	            break;
	        }
	    }
	    return res;
	}
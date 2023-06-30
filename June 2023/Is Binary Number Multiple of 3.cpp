int isDivisible(string s){
	    //complete the function here
	    int evenbitcount=0;
        int oddbitcount=0;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(i%2==0 && s[i]=='1'){
                evenbitcount++;
            }
            else if(i%2==1 && s[i]=='1'){
                oddbitcount++;
            }
            else{
                continue;
            }
        }
        if(abs(evenbitcount-oddbitcount)%3==0){
            return 1;
        }
        return 0;
	}
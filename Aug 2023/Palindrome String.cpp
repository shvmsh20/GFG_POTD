int isPalindrome(string S)
	{
	    // Your code goes here
	    int n = S.size();
	   
	    int i=0, j=n-1;
	    while(i<j){
	        if(S[i]!=S[j]) return 0;
	        i++;
	        j--;
	    }
	    return 1;
	}
int findSum(int A[], int N)
    {
    	//code here.
    	int mx=*max_element(A,A+N);
        int mn=*min_element(A,A+N);
        
        return (mx+mn);
    }
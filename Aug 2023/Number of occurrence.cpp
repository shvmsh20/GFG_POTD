int count(int arr[], int n, int x) {
	    // code here
	    int count=0,l=0,h=n-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==x)
        {
            int temp = mid+1;
             while(arr[mid]==x && mid>=0){
                 count++;mid--;
             }
             while(arr[temp]==x && temp<n){
                 temp++;count++;
             }
             return count;
        }else
        
        if(arr[mid]>x)
        h=mid-1;
        else
        l=mid+1;
    }
    return 0;
	}
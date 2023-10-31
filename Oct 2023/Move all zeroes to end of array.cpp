void pushZerosToEnd(int arr[], int n) {
	    // code here
	      int top=0;
        for(int i=0;i<n;i++){
            if(i==0 && arr[i]!=0)top++;
            else if(arr[i]!=0){
                int temp=arr[top];
                arr[top]=arr[i];
                arr[i]=temp;
                top++;
            }
        }
	}
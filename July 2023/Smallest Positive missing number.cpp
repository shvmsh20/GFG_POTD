int missingNumber(int arr[], int n) 
    { 
        // Your code here
        for(int i=0;i<n;i++){
            int ele=arr[i];
            if(ele>=1&&ele<=n){
                if(arr[ele-1]!=ele){
                    swap(arr[ele-1],arr[i]);
                    i--;
                }
            }
            
        }
        for(int i=0;i<n;i++){
            if(i+1!=arr[i]) return i+1;
        }
        return n+1;
    } 
void swapElements(int arr[], int n){
        
        // Your code here
        for(int i=0; i<n; i++){
            if(i+2<n){
                swap(arr[i], arr[i+2]);
            }
        }
        
        
    }
bool isMaxHeap(int arr[], int n)
    {
        // Your code goes here
        for(int i=n-1; i>=1; i--){
            if(i%2){
                if(arr[i/2]<arr[i]){
                    return false;
                }
            }else{
                if(arr[(i/2)-1]<arr[i]){
                    return false;
                }
            }
        }
        return true;
    }
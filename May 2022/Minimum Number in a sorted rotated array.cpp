int minNumber(int arr[], int low, int high)
    {
        // Your code here
        while(low<high){
            int mid = (low+high)/2;
            if(mid>0 && arr[mid-1]>arr[mid]) return arr[mid];
            if(arr[mid]>arr[high]){
                low = mid+1;
            }else{
                high = mid-1;
            }
            
        }
        return arr[low];
    }
int search(vector<int>& arr, int key) {
        // complete the function here
       int n=arr.size();
       int low=0;
       int high=n-1;
       while(low<=high){
           int mid=(low+high)/2;
           if(arr[mid]==key)
           return mid;
           else if(arr[mid]>=arr[low]){
               if(arr[mid]>=key && arr[low]<=key)
               high=mid-1;
               else
               low=mid+1;
           }
           else{
               if(arr[mid]<=key && arr[high]>=key)
               low=mid+1;
               else
               high=mid-1;
           }
       }
       return -1;
    }
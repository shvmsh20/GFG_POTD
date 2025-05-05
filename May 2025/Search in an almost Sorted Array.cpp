int findTarget(vector<int>& arr, int target) {
        // code here
         int n = arr.size();
        
         if(arr[0] == target) return 0;
         else if(arr[n - 1] == target) return n - 1;
            
        int low = 1, high = n - 2;
        
        while(low <= high){
            int mid = (low + high) >> 1;
            
            if(arr[mid] == target) return mid;
            else if(arr[mid - 1] == target) return mid - 1;
            else if(arr[mid + 1] == target) return mid + 1;
            
            else if(arr[mid - 1] > arr[mid]){
                if(arr[mid - 1] > target) high = mid - 1;
                else low = mid + 1;
            }
            else{
                if(arr[mid] > target) high = mid - 1;
                else low = mid + 1;
            }
        }
        return - 1;
    }
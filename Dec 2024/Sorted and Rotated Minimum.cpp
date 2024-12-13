int findMin(vector<int>& arr) {
        // complete the function here
        int n = arr.size(); 
        int low = 0, high = n - 1; 
        int ans = INT_MAX; 
        
        while (low <= high) {
            int mid = (low + high) / 2;  
            
            
            ans = min(ans, arr[mid]);
            
            
            if (arr[low] <= arr[mid]) {
                ans = min(ans, arr[low]);  
                low = mid + 1; 
            } 
            
            else {
                ans = min(ans, arr[mid + 1]);
                high = mid - 1;  
            }
        }
        
        return ans;
    }
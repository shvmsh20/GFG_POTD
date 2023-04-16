int findHeight(int N, int arr[]){
        // code here
        // Mark array with -101 + height of the node.
        
        // Find -1 and update it.
        for(int i = 0; i < N; i++) if(arr[i] == -1) arr[i] = -101;
        
        auto needToIterate = [&] () {
            for(int i = 0; i < N; i++) if(arr[i] >= 0) return true;
            return false;
        };
        
        // Keep on updating nodes unless all values are negative.
        while(needToIterate()) {
            for(int i = 0; i < N; i++) {
                if(arr[i] >= 0 && arr[arr[i]] < 0) arr[i] = arr[arr[i]] - 1;
            }
        }
        
        return -100 - *min_element(arr, arr + N);
    }
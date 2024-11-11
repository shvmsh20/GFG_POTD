int minIncrements(vector<int> arr) {
        // Code here
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int res = 0;
        for(int i=1; i<n; i++){
            if(arr[i]<=arr[i-1]){
                int diff= arr[i-1]-arr[i]+1;
                res+= diff;
                arr[i]+= diff;
            }
        }
        return res;
        
    }
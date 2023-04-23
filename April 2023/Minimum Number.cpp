int minimumNumber(int n,vector<int> &arr){
        // Code here
         int mini = INT_MAX;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i]%2 != 0) return 1;
            
            mini = min(mini, arr[i]);
        }
        return mini;
    }
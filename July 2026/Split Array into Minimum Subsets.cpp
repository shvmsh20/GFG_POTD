int minSubsets(vector<int>& arr) {
        // code here
             int n = arr.size();
        
        
        sort(arr.begin() , arr.end());
        
        int cnt = 1;
        
        for(int i=1; i<=n-1; i++){
            
             if(arr[i]- arr[i-1] != 1){
                 
                 cnt++;
             } 
            
        }
        
        return cnt;
    }
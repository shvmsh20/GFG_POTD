int maxCircularSum(vector<int> &arr) {
        // code here
        int n = arr.size();
        int  mn = arr[0], currMn = 0, sum = 0, currMx = 0, resMx = arr[0];
        for(int i=0; i<n; i++){
            currMn+= arr[i];
            mn = min(currMn, mn);
            if(currMn>0){
                currMn = 0;
            }
            currMx+= arr[i];
            resMx = max(resMx, currMx);
            if(currMx<0){
                currMx = 0;
            }
            sum+=arr[i];
        }
      
        if(resMx<0) return resMx;
        return max(resMx, sum-mn);
        
    }
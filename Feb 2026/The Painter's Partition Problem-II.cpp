bool isPoss(int t, vector<int> &arr, int n, int k){
        int currTime = 0, reqPainters = 1;
        for(int i=0; i<n; i++){
           if(arr[i]>t){
               return false;
           }
           currTime+= arr[i];
           if(currTime>t){
               reqPainters++;
               currTime = arr[i];
           }
           if(reqPainters>k){
               return false;
           }
        }
        return true;
    }
    int minTime(vector<int>& arr, int k) {
        // code here
        int n = arr.size(), lo = 1, hi = 0, res = INT_MAX;
        for(int i=0; i<n; i++){
            hi+= arr[i];
        }
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(isPoss(mid, arr, n, k)){
                res = min(res, mid);
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }
        return res;
    }
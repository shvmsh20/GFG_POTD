bool isPoss(int x, vector<int> &arr, int n, int k){
        int hours = 0;
        for(int i=0; i<n; i++){
            hours+= (arr[i]/x) + (arr[i]%x?1:0);
            if(hours>k){
                return false;
            }
        }
        return true;
    }
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int n = arr.size(), lo = 1, hi = INT_MIN;
        for(int i=0; i<n; i++){
            hi = max(hi, arr[i]);
        }
        int res = 0;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(isPoss(mid, arr, n, k)){
                res = mid;
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }
        return res;
    }
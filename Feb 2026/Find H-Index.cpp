bool isPoss(int x, vector<int> &arr, int n){
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(arr[i]>=x){
                cnt++;
            }
        }
        return cnt>=x;
    }
    int hIndex(vector<int>& arr) {
        // code here
        int n = arr.size();
        int lo=0, hi=n, res=0;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(isPoss(mid, arr, n)){
                res = mid;
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }
        return res;
    }
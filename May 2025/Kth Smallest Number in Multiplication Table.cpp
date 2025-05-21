int findPos(int x, int n, int m){
        int res = 0;
        for(int i=1; i<=n; i++){
            int t = x/i;
            res+= min(t, m);
        }
        return res;
    }
    int kthSmallest(int m, int n, int k) {
        // code here
        int lo = 1, hi = n*m;
        int row = min(n, m), col = max(n, m);
        while(lo<=hi){
            int mid = (lo+hi)/2;
            int lessAndEq = findPos(mid, row, col);
            if(lessAndEq<k){
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }
        return lo;
    }
string baseEquiv(int n, int m){
        // code here
        int low=2, high=32;
        while(low<=high){
            int mid = (low+high)/2;
            if(floor(log(n)/log(mid))+1 == m)
                return "Yes";
            else if(floor(log(n)/log(mid))+1 > m)
                low = mid+1;
            else
                high = mid-1;
        }
        return "No";
    }
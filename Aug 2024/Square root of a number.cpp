long long int floorSqrt(long long int n) {
        // Your code goes here
       
        long long int lo = 1, hi = n/2;
        long long int res = 1;
        while(lo<=hi){
           long long int mid = (lo+hi)/2;
           if(mid*mid==n){
               return mid;
           }else if(mid*mid>n){
               hi = mid-1;
           }else{
               res = mid;
               lo = mid+1;
           }
        }
        return res;
         
    }
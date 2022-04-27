long long int killinSpree(long long int n)
    {
        // Code Here
        long long int res=-1;
        long long low = 1, high = 1e6;
        while(low<=high){
            long long int mid = low+(high-low)/2;
            long long int sq_sum = (mid*(mid+1)*(2*mid+1))/6;
            if(sq_sum<=n){
                res = mid;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return res;
    }
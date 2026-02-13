int isPoss(int num, int d){
        int sum = 0, numCpy = num;
        while(num){
            sum+= num%10;
            num/=10;
        }
        return numCpy-sum>=d;
    }
    int getCount(int n, int d) {
        // code here
        int lo = 1, hi = n, res = 0;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(isPoss(mid, d)){
                res = mid;
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }
        return res==0?res:n-res+1;
    }
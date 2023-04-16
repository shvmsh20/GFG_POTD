long buzzTime(long N, long M, long L, long H[], long A[])
    {
        // code here
        long l=0, h = M;
        long ans=0;
        while(l<=h){
            long mid = l+(h-l)/2;
            long totSpeed=0;
            for(long i=0; i<N; i++){
                long speed = H[i]+A[i]*mid;
                if(speed>=L){
                    totSpeed+=speed;
                }
            }
            if(totSpeed>=M){
                ans = mid;
                h = mid-1;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
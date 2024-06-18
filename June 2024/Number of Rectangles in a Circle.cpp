int rectanglesInCircle(int r) {
        // code here
         int ans=0;
        int x=r*r;
        for(int i=1;i<=2*r;i++){
            for(int j=1;j<=2*r;j++){
                if((i*i)+(j*j)<=4*x){
                    ans++;
                }
            }
        }
        return ans;
    }
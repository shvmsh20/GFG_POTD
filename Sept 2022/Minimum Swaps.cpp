int minimumSwaps(int c[],int v[],int n,int k,int b,int T)
    {
            // code here
            int SheepUnableToReach = 0;
        int swap = 0;
        for(int i = n-1; i >=0; i--){
            if(c[i]+T*v[i] >= b){
//This sheep can reach the barn on or before time T
//So, we'll swap this sheep with all the slower sheep in front of it
                swap += SheepUnableToReach;
//Now, we've found 1 sheep out of k sheep
                k--;
            }
            else{
//This sheep can't reach the barn on or before time T
                SheepUnableToReach++;
            }
            if(k==0){
                return swap;
            }
        }
        return -1;
    }
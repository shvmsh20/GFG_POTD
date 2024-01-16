int solve(int i,int j,int m,int n){
        
        if( i > m) return 0;
        if( j == n ) return 1;
        int ans = 0;
        for(int k = 2*i;k<=m;k++){
            ans += solve(k,j+1,m,n);
        }
        return ans;
    }
    
    int numberSequence(int m, int n){
        
        int ans = 0;
        for(int i = 1;i<=m;i++){
            ans += solve(i,1,m,n);
        }
        return ans;
    }
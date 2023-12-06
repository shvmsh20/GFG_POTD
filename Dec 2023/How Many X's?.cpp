int isValid(int n,int x){
        int cnt = 0;
        while(n != 0){
            int rem = n%10;
            if(rem == x) cnt++;
            n = n/10;
        }
        
        return cnt;
    }
    int countX(int L, int R, int X) {
        // code here
        int cnt = 0;
        
        for(int i = L+1;i<R;i++){
            int val = isValid(i,X);
            if(val != 0){
                cnt += val;
            }
        }
        
        return cnt;
    }
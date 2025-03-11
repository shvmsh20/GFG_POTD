int countWays(int n) {
        // your code here
        if(n==1 || n==2){
            return n;
        }
        int a = 1, b = 2;
        for(int i=3; i<=n; i++){
            int x = a+b;
            a = b;
            b = x;
        }
        return b;
    }
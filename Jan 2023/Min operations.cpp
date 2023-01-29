int solve(int a, int b) {
        // code here
        if(a==b)
        return 0;
        
        if(a==0 || b==0)
        return 1;
        
        int x = a&b;
        if(a==x || b==x)
        return 1;
        
        return 2;
    }
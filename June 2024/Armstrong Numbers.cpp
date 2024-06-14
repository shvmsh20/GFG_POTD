string armstrongNumber(int n){
        // code here
        int cube = 0, cpy = n;
        while(cpy){
            int digit = cpy%10;
            cube+= (digit*digit*digit);
            cpy/=10;
        }
        if(cube==n){
            return "Yes";
        }
        return "No";
    }
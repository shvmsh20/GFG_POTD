int waysToBreakNumber(int N){
        // code here 
        long x=N;

        return (int)((3*x+(x-1)*(x-2)/2)%1000000007);
    }
int minIteration(int n, int m, int x, int y){    
        // code here
        int firstcorner=x-1+y-1;
        int secondcorner=x-1+m-y;
        int thirdcorner=n-x+y-1;
        int fourthcorner=n-x+m-y;
        return max(max(firstcorner,secondcorner),max(thirdcorner,fourthcorner));
    }
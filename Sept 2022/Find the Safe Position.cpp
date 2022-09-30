int safePos(int n, int k) {
        // code here
        return n>1?(safePos(n-1,k)+k-1)%n+1:1;
    }
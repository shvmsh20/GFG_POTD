vector<int> changeBits(int N) {
        // code here
        int c=0,t=N;
        while(N){
           c++;
           N=N>>1;
        }
        int x=pow(2,c)-1;
        return {x-t,x};
    }
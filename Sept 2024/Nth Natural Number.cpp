ong long findNth(long long n) {
        // code here.
         long res=0,p=1;
        while(n>0){
            long rem= n%9;
            res= res+ rem*p;
            n/=9;
            p*=10;
        }
        return res;
    }
double power(double b, int e) {
        // code here
        if(e<0){
            return power(1.0/b,-e);
        }
        double res=1.0;
        while(e>0){
            if(e&1){
                res=res*b;
            }
            b=b*b;
            e>>=1;
        }
        return res;
    }
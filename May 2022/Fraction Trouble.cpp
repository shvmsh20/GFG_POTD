vector<int> numAndDen(int n, int d) {
        // code here
        int a=-1, b=1;
        double req = (double)n/d;
        for(int q=10000; q>=1; q--){
            int p = req*q;
            if(p*d<n*q){
                if(a==-1){
                    a = p;
                    b = q;
                }else if(p*b>q*a){
                    a = p;
                    b = q;
                }
            }
        }
        return {a, b};
    }
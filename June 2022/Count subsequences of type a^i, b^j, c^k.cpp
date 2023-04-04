int fun(string &s) {
        //code here
        int MOD = 1e9+7;
        int a=0, ab=0, abc=0, n=s.size();
        for(int i=0; i<n; i++){
            if(s[i]=='a'){
                a = ((2*a)%MOD+1)%MOD;
            }else if(s[i]=='b'){
                ab = ((2*ab)%MOD + a)%MOD;
            }else{
                abc = ((2*abc)%MOD + ab)%MOD;
            }
        }
        return abc;
    }
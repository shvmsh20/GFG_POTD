char nthCharacter(string s, int r, int n) {
        //code here
          int ind=0;
        long long maxm=pow(2,r);
        while(maxm-1<n){
            n-=maxm;
            ind++;
        }
        bool flag=true;
        while(n>0){
            maxm>>=1;
            if(n>=maxm){
                flag=!flag;
                n-=maxm;
            }
        }
        if(flag)return s[ind];
        else return s[ind]=='1'?'0':'1';
    }
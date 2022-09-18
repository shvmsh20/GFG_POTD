void genPrime(vector<bool>& v,int R){
        v[0]=0;
        v[1]=0;
        for(int i=2;i*i<=R;i++){
            if(v[i]==1){
                for(int j=i*i;j<=R;j+=i){
                    if(v[j]==1)
                    v[j]=0;
                }
                
            }
        }
    }
	public:
		int Count(int L, int R){
		    vector<bool> v(R+1,1);
		    genPrime(v,R);
		    int c=0,p=0;
          //1 is neither prime nor composite
		    if(L==1)
		        L++;
		    for(int i=L;i<=R;i++){
		        if(v[i]==1){
		            p++;
		        }else{
		            c++;
		        }
		    }
		    return c-p;
		}
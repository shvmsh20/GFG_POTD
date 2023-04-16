//Recursive
long long power(int a, int b){
        if(b==1){
            return a;
        }
        if(b%2==0){
            long long temp = power(a, b/2);
            return (temp*temp)%mod;
        }else{
            
            return (a*power(a, b-1))%mod;
        }
        
    } 
    long long karyTree(int k, int m) {
        return power(k, m)%mod;
    }

//Iterative
int mod = 1e9+7;
long long int power(long long int a, long long int b){
        long long int res=1;
        a = a%mod;
        while(b){
            if(b&1){
                res = (res*a)%mod;
            }
            b = b>>1;
            a = (a*a)%mod;
            
        }
        return res;
        
    } 
    long long karyTree(int k, int m) {
        return power(k, m)%mod;
    }    
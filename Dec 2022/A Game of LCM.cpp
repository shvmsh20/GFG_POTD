long long gcd(int a, int b){
        if(b==0){
            return a;
        }
        return gcd(b, a%b);
    }
    long long fun(long long N){
        if(N==2){
            return 2;
        }
        if(N==3){
            return 6;
        }
        // long long n1 = (N*(N-1))/(gcd(N, N-1));
        // long long n2 = ((N-2)*(N-3))/(gcd(N-2, N-3));
        
        // long long x = (n1*n2)/(gcd(n1, n2));
        
        long long y = N;
        int count=1;
        for(long long i=N-1; i>=1; i--){
            if(__gcd(i, y)==1){
                y*=i;
                count++;
            }
            if(count==4){
                break;
            }
        }
        //cout << x << " " << y << endl;
        return y;
    }
    long long maxGcd(int n) {
        // code here
        return max(fun(n), fun(n-1));
        
    }
int sumOfAll(int l, int r){
        // code here
        
        bool isPrime[r+1];
        memset(isPrime, 1, r+1);
        for(int i=2; i<=r; i++){
            if(isPrime[i]){
                for(int j=i*i; j<=r; j+=i){
                    isPrime[j] = false;
                }
            }
        }
        int ans = 0;
        while(l<=r){
            if(l==1){
                ans++;
                l++;
                continue;
            }
            for(int i=2; i<=l; i++){
                if(isPrime[i] && l%i==0){
                    ans+=i;
                }
            }
            l++;
        }
        return ans;
        
        
    }
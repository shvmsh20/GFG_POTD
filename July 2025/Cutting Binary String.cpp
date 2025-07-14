bool powOfFive(string s){
        long long num = 0, cnt=0;
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]=='1'){
                num+= (1<<cnt);
            }
            cnt++;
        }
        while(num!=1){
            if(num<5 || num%5!=0){
                return false;
            }
            num = num/5;
        }
        return true;
    }
    int cuts(string s){
        //code
        int n = s.length();
        vector<int> res(n+1, INT_MAX);
        res[n] = 1;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='1'){
                for(int j=i; j<n; j++){
                if(powOfFive(s.substr(i, j-i+1)) && res[j+1]!=INT_MAX){
                    res[i] = min(res[i], 1+res[j+1]);
                }
            }
            }
            
        }
        return res[0]==INT_MAX?-1: res[0]-1;
        
    }
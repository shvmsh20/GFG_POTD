vector<string> pattern(int n){
        // code here
        int num=1;
        vector<string> res;
        for(int i=0; i<n; i++){
            string t;
            for(int j=0; j<i; j++){
                t+= "--";
            }
            for(int j=0; j<n-i; j++){
                t = t + to_string(num)+ '*';
                num++;
            }
            res.push_back(t);
        }
        for(int i=n-1; i>=0; i--){
            for(int j=0; j<n-i; j++){
                if(j==n-i-1){
                    res[i] += to_string(num);
                    num++;
                }else{
                    res[i] = res[i] + to_string(num) + '*';
                    num++;
                }
            }
        }
        return res;
    }
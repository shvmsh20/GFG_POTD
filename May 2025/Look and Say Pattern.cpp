string countAndSay(int n) {
        // code here
        string res = "1";
        while(--n){
            string temp;
            int cnt = 1;
            char prev = res[0];
            for(int i=1; i<res.size(); i++){
                if(res[i]==prev){
                    cnt++;
                }else{
                    temp+= to_string(cnt);
                    temp+= prev;
                    cnt = 1;
                    prev = res[i];
                }
            }
            temp+= to_string(cnt);
            temp+= res[res.size()-1];
            // cout << temp << " ";
            res = temp;
        }
        return res;
    }
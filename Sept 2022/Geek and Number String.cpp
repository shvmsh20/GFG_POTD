int minLength(string s, int n) {
        // code here
        unordered_map<string, int> mp;
        mp["12"]++;
        mp["21"]++;
        mp["34"]++;
        mp["43"]++;
        mp["56"]++;
        mp["65"]++;
        mp["78"]++;
        mp["87"]++;
        mp["09"]++;
        mp["90"]++;
        int res = n, cpy;
        string temp;
        while(true){
            cpy = res;
            for(int i=0; i<n; i++){
                if(i==n-1){
                    temp+=s[i];
                    break;
                }
                string t = s.substr(i, 2);
                if(mp.find(t)!=mp.end()){
                    res-=2;
                    i++;
                }else{
                    temp+=s[i];
                }
            }
            //cout << temp << " " << res << endl;
            // break;
            s = temp;
            temp.clear();
            if(cpy==res){
                break;
            }
            n = res;
        }
        
        return res;
    } 
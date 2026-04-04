vector<string> graycode(int n) {
        // code here
        if(n==1){
            vector<string> v;
            v.push_back("0");
            v.push_back("1");
            return v;
        }
        vector<string> v = graycode(n-1);
        vector<string> res;
        for(int i=0;i<v.size();i++){
            res.push_back("0"+v[i]);
        }
        for(int i=res.size()-1;i>=0;i--){
            res.push_back("1"+v[i]);
        }
        return res;
    }
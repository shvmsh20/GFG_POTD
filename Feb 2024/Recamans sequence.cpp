vector<int> recamanSequence(int n){
        // code here
        unordered_set<int> s;
        vector<int> res(n);
        res[0] = 0;
        s.insert(0);
        for(int i=1; i<n; i++){
            int x = res[i-1] - i;
            if(x>0 && s.find(x)==s.end()){
                res[i] = x;
            }else{
                res[i] = res[i-1]+i;
            }
            s.insert(res[i]);
        }
        return res;
    }
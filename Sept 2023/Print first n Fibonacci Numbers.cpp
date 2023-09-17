vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> res;
        res.push_back(1);
        if(n==1){
            return res;
        }
        res.push_back(1);
        for(int i=2; i<n; i++){
            res.push_back(res[i-1]+ res[i-2]);
        }
        return res;
    }
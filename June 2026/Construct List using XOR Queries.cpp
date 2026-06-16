vector<int> constructList(vector<vector<int>> &queries) {
        // code here
        vector<int> res;
        int n = queries.size(), currXor = 0;
        for(int i=n-1; i>=0; i--){
            vector<int> p = queries[i];
            int op = p[0], x = p[1];
            if(op==0){
                res.push_back(currXor^x);
            }else{
                currXor = currXor^x;
            }
        }
        res.push_back(0^currXor);
        sort(res.begin(), res.end());
        return res;
    }
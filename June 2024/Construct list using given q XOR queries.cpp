vector<int> constructList(int q, vector<vector<int>> &queries) {
        // code here
        vector<int> res;
        int xr = -1;
        for(int i=queries.size()-1; i>=0; i--){
            vector<int> p = queries[i];
            if(p[0]==0){
                if(xr!=-1){
                    res.push_back((xr ^ p[1]));
                }else{
                    res.push_back(p[1]);
                }
            }else{
                if(xr == -1){
                    xr = p[1];
                }else{
                    xr = xr ^ p[1];
                }
            }
        }
        if(xr!=-1){
            res.push_back((xr ^ 0));
        }else{
            res.push_back(0);
        }
        sort(res.begin(), res.end());
        return res;
    }
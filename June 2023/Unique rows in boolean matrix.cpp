vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        //Your code here
        vector<int> x(col);
        vector<vector<int>> res;
        unordered_set<string> s;
        for(int i=0; i<row; i++){
            string tmp;
            x.clear();
            for(int j=0; j<col; j++){
                tmp+= (to_string(M[i][j]) + '$');
                x.push_back(M[i][j]);
            }
            if(s.find(tmp)==s.end()){
                res.push_back(x);
                s.insert(tmp);
            }
        }
        return res;
            
    }
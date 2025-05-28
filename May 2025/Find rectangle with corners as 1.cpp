bool ValidCorner(vector<vector<int> >& matrix) {
        // code here
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_map<int, unordered_set<int>> mp;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                for(int j2=j+1; j2<m; j2++){
                    if(matrix[i][j]==1 && matrix[i][j2]==1){
                        if(mp.find(j)!=mp.end() && mp[j].find(j2)!=mp[j].end()){
                            return true;
                        }else{
                            mp[j].insert(j2);
                        }
                    }
                }
            }
        }
        return false;
    }
 int findCoverage(vector<vector<int>>& mat) {
        // code here
        int res = 0, n = mat.size(), m = mat[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]==1){
                    continue;
                }
                for(int x=i-1; x>=0; x--){
                    if(mat[x][j]==1){
                        res++;
                        break;
                    }
                }
                for(int x=i+1; x<n ;x++){
                    if(mat[x][j]==1){
                        res++;
                        break;
                    }
                }
                for(int y=j+1; y<m; y++){
                    if(mat[i][y]==1){
                        res++;
                        break;
                    }
                }
                for(int y=j-1; y>=0; y--){
                    if(mat[i][y]==1){
                        res++;
                        break;
                    }
                }
            }
        }
        return res;
    }
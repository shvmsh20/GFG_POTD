vector<int> exitPoint(vector<vector<int>>& mat) {
        // code here
        int n = mat.size(), m = mat[0].size(), dirx=0, diry=1;
        int x=0, y=0, px=0, py=0;
        while(x>=0 && x<n && y>=0 && y<m){
            if(mat[x][y]==1){
                if(dirx==0 && diry==1){
                    dirx=1;
                    diry=0;
                }else if(dirx==1 && diry==0){
                    dirx=0;
                    diry=-1;
                }else if(dirx==0 && diry==-1){
                    dirx=-1;
                    diry=0;
                }else if(dirx==-1 && diry==0){
                    dirx=0;
                    diry=1;
                }
                mat[x][y] = 0;
            }
            px=x;
            py=y;
            x+= dirx;
            y+= diry;
        }
        return {px, py};
    }
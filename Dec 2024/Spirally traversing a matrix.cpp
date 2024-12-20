vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        // code here
        int l = 0, r = mat[0].size()-1, t = 0, b = mat.size()-1;
        vector<int> res;
        while(l<=r && t<=b){
            for(int i=l; i<=r; i++){
                res.push_back(mat[t][i]);
            }
            t++;
            if(t>b){
                break;
            }
            for(int i=t; i<=b; i++){
                res.push_back(mat[i][r]);
            }
            r--;
            if(l>r){
                break;
            }
            for(int i=r; i>=l; i--){
                res.push_back(mat[b][i]);
            }
            b--;
            if(t>b){
                break;
            }
            for(int i=b; i>=t; i--){
                res.push_back(mat[i][l]);
            }
            l++;
        }
        return res;
    }
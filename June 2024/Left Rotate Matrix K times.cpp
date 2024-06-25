vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
         int n=mat.size();
        k=k%mat[0].size();
        for(int i=0;i<n;i++){
            reverse(mat[i].begin(),mat[i].begin()+k);
            reverse(mat[i].begin()+k,mat[i].end());
            reverse(mat[i].begin(),mat[i].end());
        }
        return mat;
    }
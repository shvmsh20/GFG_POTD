bool isToeplitz(vector<vector<int>>& mat) {
        // code here
        int n = mat.size(), m = mat[0].size();
        for(int k=0; k<n-1; k++){
            int val = mat[0][k];
            int i=0, j=k;
            while(i<n && j<m){
                if(mat[i][j]!=val){
                    return false;
                }
                i++;
                j++;
            }
        }
        for(int k=1; k<n; k++){
            int i=k, j=0;
            int val = mat[i][0];
            while(i<n && j<m){
                if(mat[i][j]!=val){
                    return false;
                }
                i++;
                j++;
            }
        }
        return true;
    }
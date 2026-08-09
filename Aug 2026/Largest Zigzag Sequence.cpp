 int zigzagSequence(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        for(int i=1; i<n; i++){
            for(int j=0; j<n; j++){
                int mx = 0;
                for(int k=0; k<n; k++){
                    if(j==k) continue;
                    mx = max(mx, mat[i-1][k]);
                }
                mat[i][j]+= mx;
            }
        }
        int res = 0;
        for(int j=0; j<n; j++){
            res = max(res, mat[n-1][j]);
        }
        return res;
    }
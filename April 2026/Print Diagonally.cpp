vector<int> diagView(vector<vector<int>> mat) {
        // code here
        vector<int> res;
        int n = mat.size();
        for(int x=0; x<n; x++){
            int j=x, i=0;
            while(i<n && j>=0){
                res.push_back(mat[i][j]);
                i++;
                j--;
            }
        }
        for(int x=1; x<n; x++){
            int i=x, j=n-1;
            while(i<n && j>=0){
                res.push_back(mat[i][j]);
                i++;
                j--;
            }
        }
        return res;
        
    }
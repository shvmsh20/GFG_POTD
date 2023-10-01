vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
         vector<int> ans;
        if(n==1){ //for row==1
                for(int i=0; i<m; i++){
                    ans.push_back(matrix[0][i]);
                }
                return ans;
        }
        else if(m==1){ //for col == 1
                for(int i=0; i<n; i++){
                    ans.push_back(matrix[i][m-1]);
                }
                return ans;
        }
        for(int i=0; i<m; i++){
            ans.push_back(matrix[0][i]);
        }
        for(int i=1; i<n; i++){
            ans.push_back(matrix[i][m-1]);
        }
        for(int i=m-2; i>=0; i--){
            ans.push_back(matrix[n-1][i]);
        }
        for(int i=n-2; i>=1; i--){
            ans.push_back(matrix[i][0]);
        }
        return ans;
    }
 Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        // code Here
       
        int n = mat.size();
        vector<vector<Node*>> vec(n, vector<Node*>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                vec[i][j] = new Node(mat[i][j]);
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j!=n-1) vec[i][j]->right = vec[i][j+1];
                if(i!=n-1) vec[i][j]->down = vec[i+1][j];
            }
        }
        return vec[0][0];
        
    }
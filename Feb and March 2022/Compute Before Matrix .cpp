vector<vector<int>> computeBeforeMatrix(int N, int M, vector<vector<int>> after){
        // Code here
        vector<vector<int>> v(N,vector<int>(M,0));
        
        for(int i=0;i<N;i++){
            int sum = 0;
            for(int j=0;j<M;j++){
                if(i==0 && j==0) v[i][j] = after[i][j];
                else if(i==0) v[i][j] =after[i][j] - after[i][j-1];
                else if(j==0) v[i][j] =after[i][j] - after[i-1][j];
                else v[i][j] = after[i][j] - after[i-1][j] - sum;
                sum+=v[i][j];
            }
        }
        
        return v;
    }
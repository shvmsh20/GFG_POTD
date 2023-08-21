int Count(vector<vector<int> >& matrix) {
        // Code here
         int cnt = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0;i<n;i++){
            for(int j = 0;j < m;j++){
                int zeros = 0;
                if(matrix[i][j] == 1){
                    //left
                    if(j > 0 && matrix[i][j-1] == 0 )
                       zeros++;
                    if (i > 0 && j > 0 && matrix[i-1][j-1] == 0)
                      zeros++;
                     //right
                    if( j < m - 1 && matrix[i][j+1] == 0)
                        zeros++;
                    if( i > 0 && j < m-1 && matrix[i-1][j+1] == 0)
                        zeros++;
                     //down, 
                    if(i < n - 1 && matrix[i+1][j] == 0 )
                        zeros++;
                    
                    if(i < n-1 && j  > 0 && matrix[i+1][j-1] == 0)
                        zeros++;
                        

                    if( i < n-1 && j < m-1 && matrix[i+1][j+1] == 0)
                        zeros++;
                    //top
                    if( i > 0 && matrix[i-1][j] == 0)
                        zeros++;
                        // cout<<zeros<<endl;
                    if(zeros != 0 && zeros % 2 == 0)
                    cnt++;
                }
                
            }
        }
        return cnt;
    }
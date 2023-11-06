vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        // code here
         vector<int> ans;
        for(int i=0;i<q;i++){
            int a =  queries[i][0];
            int b =  queries[i][1];
            int c =  queries[i][2];
            int sum = 0;
            //loop1 for up and down
            for(int j=-a;j<=a;j++){
                    int x = b+a; 
                    int z = b-a;
                    int y = c+ j;
                    if(x>=0 && x<n && y>=0 && y<m ){
                        sum += mat[x][y];
                    }
                    if(z>=0 && z<n && y>=0 && y<m ){
                        sum += mat[z][y];
                    }
            }
            //loop for left and right but excluding two from top //and two from bottom as it is included previously
             for(int j=-a+1;j<=a-1;j++){
                    int y = c+a; 
                    int z = c-a;
                    int x = b+ j;
                    if(x>=0 && x<n && y>=0 && y<m ){
                        sum += mat[x][y];
                    }
                    if(x>=0 && x<n && z>=0 && z<m ){
                        sum += mat[x][z];
                    }
            }
           
            ans.push_back(sum);
        }
        return ans;
    }
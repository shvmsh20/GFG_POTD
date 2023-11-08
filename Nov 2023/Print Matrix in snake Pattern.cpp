vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
         vector<int >snakepattern;
        int n= matrix.size();
        int m=matrix[0].size();
        
       for(int i=0;i<n;i++){
           if(i&1){
               for(int j=m-1;j>=0;j--)
                  snakepattern.push_back(matrix[i][j]); 
            }
            else{
                for(int j=0;j<m;j++)
                   snakepattern.push_back(matrix[i][j]);
            }   
        }
        return snakepattern;  
    }
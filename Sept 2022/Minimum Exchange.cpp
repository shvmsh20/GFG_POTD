int MinimumExchange(vector<vector<char>>matrix){
    // Code here
    int cntA = 0 , cntB =0 ; 
   
   int n = matrix.size();
   int m = matrix[0].size() ; 
   int tmpA  = 0 , tmpB = 0 ; 
   
   for(int i=0;i<n;i++){
    for(int j = 0 ; j< m ;j++ ){
       if(matrix[i][j] == 'A')tmpA++;
       else tmpB++;
    }
   }
   
   for(int i= 0 ; i< n ;i++) {
       for(int j = 0 ;j  < m ; j++ ){
           if(i % 2 == 0 && j % 2 == 0 && matrix[i][j] != 'A') cntA++; 
           if(i % 2 == 0 && j % 2 != 0 && matrix[i][j] != 'B') cntA++; 
           if(i % 2 != 0 && j % 2 == 0 && matrix[i][j] != 'B') cntA++; 
           if(i % 2 != 0 && j % 2 != 0 && matrix[i][j] != 'A') cntA++; 
           if(i % 2 == 0 && j % 2 == 0 && matrix[i][j] != 'B') cntB++; 
           if(i % 2 == 0 && j % 2 != 0 && matrix[i][j] != 'A') cntB++; 
           if(i % 2 != 0 && j % 2 == 0 && matrix[i][j] != 'A') cntB++; 
           if(i % 2 != 0 && j % 2 != 0 && matrix[i][j] != 'B') cntB++; 
       }
   }
   // return (cntA + 1 )/2;
   
   if(tmpA > tmpB) return (cntA + 1)/ 2 ; 
   else if (tmpB < tmpA ) return (cntB+ 1 )/2 ; 
   return min((cntA+1) / 2 , (cntB+1) /2 );
}
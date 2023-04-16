int solve(int i,int j,vector<vector<char>>&mat,int x,string &t){
       if(i<0 || i==mat.size() || j<0 || j==mat[0].size() || mat[i][j]!=t[x])
       return 0;
       
       if( x==t.size()-1 && mat[i][j]==t[x])
       return 1;
       
       char c=mat[i][j];
       mat[i][j]='*';
       
       int sum=solve(i+1,j,mat,x+1,t)+solve(i-1,j,mat,x+1,t)+solve(i,j+1,mat,x+1,t)+solve(i,j-1,mat,x+1,t);
       
       mat[i][j]=c;
       
       return sum;
       
       
   }
   int findOccurrence(vector<vector<char> > &mat, string t){
       
       int count=0;
       for(int i=0;i<mat.size();i++){
           for(int j=0;j<mat[0].size();j++){
               if(mat[i][j]==t[0] )
               count+=solve(i,j,mat,0,t);
           }
       }
       return count;
   }
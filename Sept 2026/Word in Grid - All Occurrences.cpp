bool isStartIndex(vector<vector<char>> &mat, string &word, int i, int j) {
           int m=mat.size();
           int n=mat[0].size();
           int k=0,a=i,b=j;
           while(b<n && mat[a][b]==word[k]) { // east
               b++; k++;
           } if(k==word.size()) return true;
           k=0,a=i,b=j;

           while(a>=0 && b<n && mat[a][b]==word[k]) { // north-east
               a--; b++; k++;
           } if(k==word.size()) return true;
           k=0,a=i,b=j;

           while(a<m && b<n && mat[a][b]==word[k]) { // south-east
               a++; b++; k++;
           } if(k==word.size()) return true;
           k=0,a=i,b=j;

           while(a<m && mat[a][b]==word[k]) { // south
               a++; k++;
           } if(k==word.size()) return true;
           k=0,a=i,b=j;

           while(a<m && b>=0 && mat[a][b]==word[k]) { // south-west
               a++; b--; k++;
           } if(k==word.size()) return true;
           k=0,a=i,b=j;

           while(b>=0 && mat[a][b]==word[k]) { // west
               b--; k++;
           } if(k==word.size()) return true;
           k=0,a=i,b=j;

           while(a>=0 && b>=0 && mat[a][b]==word[k]) { // north-west
               a--; b--; k++;
           } if(k==word.size()) return true;
           k=0,a=i,b=j;

           while(a>=0 && mat[a][b]==word[k]) { // north
               a--; k++;
           } if(k==word.size()) return true;
           return false;
       }
       vector<vector<int>> searchWord(vector<vector<char>> &mat, string &word) {
           // Code here
           vector<vector<int>> ans;
           int n=mat.size();
           int m=mat[0].size();
           for(int i=0; i<n; i++) {
               for(int j=0; j<m; j++) {
                   if(isStartIndex(mat,word,i,j)) ans.push_back({i,j});
               }
           } return ans;
       }
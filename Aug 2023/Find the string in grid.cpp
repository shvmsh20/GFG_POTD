vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
        char p = word[0];int n = grid.size();int m = grid[0].size();
        vector<vector<int>> ans;
        vector<vector<int>> val;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==p){
                    val.push_back({i,j});
                   // cout<<i<<j<<endl;
                }
            }
        }
        
        for(int i=0;i<val.size();i++){
                bool flag = false;
                int q = val[i][0];
                int r = val[i][1];
                
                int size = word.size();
                
                string out="";
                int k=q;int l=r;
                while(k<n && l<m && size>0 && flag==false){
                    out+=grid[k][l];
                    k++;
                    l++;
                    size--;
                }
                
                if(out==word){
                    flag=true;
                    ans.push_back({q,r});
                }
                
                size = word.size();
                
                out="";
                k=q;l=r;
                while(k<n && size>0 && flag==false){
                    out+=grid[k][l];
                    k++;
                    size--;
                }
                
                 if(out==word){
                    flag=true;
                    ans.push_back({q,r});
                }
                
                
                 
                size = word.size();
                
                out="";
                k=q;l=r;
                while(l<m && size>0 && flag==false){
                    out+=grid[k][l];
                    l++;
                    size--;
                }
                
                
                 if(out==word){
                    flag=true;
                    ans.push_back({q,r});
                }
                
                size = word.size();
                
                out="";
                k=q;l=r;
                while(k<n && l>=0 && size>0 && flag==false){
                    out+=grid[k][l];
                    k++;
                    l--;
                    size--;
                }
                
                 if(out==word){
                    flag=true;
                    ans.push_back({q,r});
                 }
                 
                  size = word.size();
                
                out="";
                k=q;l=r;
                while(k>=0 && size>0 && flag==false){
                    out+=grid[k][l];
                    k--;
                    size--;
                }
                
                 if(out==word){
                    flag=true;
                    ans.push_back({q,r});
                 }
                 
                  size = word.size();
                
                out="";
                k=q;l=r;
                while(k>=0 && l>=0 && size>0 && flag==false){
                    out+=grid[k][l];
                    k--;
                    l--;
                    size--;
                }
                
                 if(out==word){
                    flag=true;
                    ans.push_back({q,r});
                 }
                 
                 
                size = word.size();
                
                out="";
                k=q;l=r;
                while(l>=0 && size>0 && flag==false){
                    out+=grid[k][l];
                    size--;
                    l--;
                }
                
                 if(out==word){
                    flag=true;
                    ans.push_back({q,r});
                 }
                 
                 size = word.size();
                
                out="";
                k=q;l=r;
                while(k>=0 && l<m && size>0 && flag==false){
                    out+=grid[k][l];
                    k--;
                    l++;
                    size--;
                }
                
                 if(out==word){
                    flag=true;
                    ans.push_back({q,r});
            }
        }
        
        return ans;
    }
int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            //  code here
             vector<int>row,col;
           row.push_back(0);
           col.push_back(0);
           for(auto i:enemy)
           {
               row.push_back(i[0]);
               col.push_back(i[1]);
           }
           row.push_back(n+1);
           col.push_back(m+1);
           sort(row.begin(),row.end());
           sort(col.begin(),col.end());
           int maxrow=0;
           int maxcol=0;
           for(int i=1;i<col.size();i++)
           {
               maxrow=max(maxrow,row[i]-row[i-1]-1);
               maxcol=max(maxcol,col[i]-col[i-1]-1);
           }
           return maxrow*maxcol;
        }
void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int row=matrix.size();
        int col=matrix[0].size();
        vector<pair<int,int>>v;
        for(int i=0;i<row;i++)
        {
        for(int j=0;j<col;j++)
        if(matrix[i][j]==1)
        v.push_back({i,j});
        }
        
        for(int i=0;i<v.size();i++)
        {
            int r=v[i].first;
            int c=v[i].second;
            
            int j=r;
            while(j>=0)
            {
                matrix[j][c]=1;
                j--;
            }
            j=r;
            while(j<row)
            {
                matrix[j][c]=1;
                j++;
            }
            j=c;
            while(j>=0)
            {
                matrix[r][j]=1;
                j--;
            }
            j=c;
            while(j<col)
            {
                matrix[r][j]=1;
                j++;
            }
    }
    }
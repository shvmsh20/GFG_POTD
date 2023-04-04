string dfs(vector<vector<int>>& grid, int i, int j, int row, int col){

        

        string temp;

        if(i<0 || j< 0 || i>=row || j>=col || grid[i][j]==0)

            return temp;

        

        grid[i][j]=0;

        

        temp+="1";

        temp+=("u" + dfs(grid,i-1,j,row,col));

        temp+=("d" + dfs(grid,i+1,j,row,col));

        temp+=("l" + dfs(grid,i,j-1,row,col));

        temp+=("r" + dfs(grid,i,j+1,row,col));

        

    

        return temp;

    }

    int countDistinctIslands(vector<vector<int>>& grid) {

        // code here

        

        int row=grid.size();

        int col=grid[0].size();

 

 

        set<string> st;

        for(int i=0;i<row;i++){

            for(int j=0;j<col;j++){

                if(grid[i][j]==1){

                    string island=dfs(grid,i,j,row,col);

                    st.insert(island);

                }

            }

        }

        

        return st.size();

        
    }
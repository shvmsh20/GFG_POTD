void dfs(int i,int j,int n,int m,vector<vector<int>> &mat,vector<vector<int>>&vis,vector<int>&ans){
        if(i<0 or j<0 or i>=n or j>=m or vis[i][j]) return;
        vis[i][j]=1;
        ans.push_back(mat[i][j]);
        dfs(i-1,j+1,n,m,mat,vis,ans);
        dfs(i+1,j-1,n,m,mat,vis,ans);
    }
    vector<int> antiDiagonalPattern(vector<vector<int>>&mat) 
    {
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<int>ans;
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) if(vis[i][j]==0) dfs(i,j,n,m,mat,vis,ans);
        return ans;
    }
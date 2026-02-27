int countSquare(vector<vector<int>>& mat, int x) {
        // code here
         int n = mat.size(), m = mat[0].size(), res = 0;
        
        vector<vector<int>>pre(n+1, vector<int>(m+1, 0));
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                pre[i+1][j+1] = mat[i][j];
                
                pre[i+1][j+1] += pre[i][j+1];
                pre[i+1][j+1] += pre[i+1][j];
                pre[i+1][j+1] -= pre[i][j];
            }
        }
        
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                for(int len = 1; len <= min(i, j); len++)
                {
                    int curr = pre[i][j];
                    
                    curr -= pre[i-len][j];
                    curr -= pre[i][j-len];
                    curr += pre[i-len][j-len];
                    
                    if(curr == x) res++;
                }
            }
        }
        
        return res;
    }
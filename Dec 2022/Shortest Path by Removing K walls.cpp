int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
    bool isValid(int i,int j,vector<vector<int>>&mat)
    {
        if(i<0 || j<0 || i>=mat.size() || j>=mat[0].size()) return false;
        return true;
    }
    int shotestPath(vector<vector<int>> mat, int n, int m, int k) {
        queue<vector<int>> q;
        int vis[51][51][51];
        memset(vis,0,sizeof(vis));
        
        int i = 0 , j = 0 , ans = 0;
        
        q.push({i,j,k});
        vis[0][0][k] = 1;  //Here we also need to store the value of k (it may vary) for diff paths
        
        while(q.size())
        {
            int currSize = q.size();
            while(currSize--)
            {
                vector<int> temp = q.front();
                q.pop();
                if(temp[0]==n-1 && temp[1]==m-1) return ans;
                for(auto x:dir)
                {
                    int p = temp[0]+x[0];
                    int s = temp[1]+x[1];
                    if(isValid(p,s,mat) && !vis[p][s][temp[2]])
                    {
                        if(mat[p][s]==1)
                        {
                            if(temp[2]>0)
                            {
                                q.push({p,s,temp[2]-1});
                                vis[p][s][temp[2]] = 1;
                            }
                        }
                        else
                        {
                            q.push({p,s,temp[2]});
                            vis[p][s][temp[2]] = 1;
                        }
                    }
                }
            }
            ans++;
        }
        return -1;
    }
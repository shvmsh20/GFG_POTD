vector<int> par;
    vector<int> size;
    
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    
    int find(int x){
        if(x == par[x]) return x;
        return par[x] = find(par[x]);
    }
    
    int unionDSU(int a, int b){
        a = find(a), b = find(b);
        if(a==b) return size[a];
        
        if(size[a] > size[b]){
            par[b] = a;
            size[a] += size[b];
        }else{
            par[a] = b;
            size[b] += size[a];
        }
        return max(size[a], size[b]);
    }
    
    bool isValid(int x1, int y1, int n, vector<vector<int>>& grid){
        if(x1<0 || x1>=n || y1<0 || y1>=n || grid[x1][y1] == 0) return false;
        return true;
    }
    
    int largestIsland(vector<vector<int>>& grid) 
    {
        // Your code goes here.
        int ans = 1, n = grid.size();
        par.clear();
        par.resize(n*n+1);
        for(int i=0; i<=n*n; ++i) par[i] = i;
        
        size.clear();
        size.resize(n*n+1, 0);
        
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                if(grid[i][j]==1){
                    size[i*n+j] = 1;
                }
            }
        }
        
        
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                if(grid[i][j]==1){
                    for(int k=0; k<4; ++k){
                        int x1 = i + dx[k], y1 = j + dy[k];
                        if(isValid(x1,y1,n,grid)){
                            int sz = unionDSU(i*n+j, x1*n+y1);
                            ans = max(ans, sz);
                        }
                    }
                }
            }
        }
        
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                if(grid[i][j]==0){
                    set<int> st;
                    int sz = 1;
                    for(int k=0; k<4; ++k){
                        int x1 = i + dx[k], y1 = j + dy[k];
                        if(isValid(x1,y1,n,grid)){
                            int p = find(x1*n+y1);
                            if(st.find(p) != st.end()) continue;
                            st.insert(p);
                            sz += size[p];
                            ans = max(ans, sz);
                        }
                    }
                }
            }
        }
        
        return ans;
    }
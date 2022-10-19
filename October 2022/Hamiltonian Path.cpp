bool dfs(int u, int N, vector<vector<int>> &adj, vector<bool> &vis, int count){
        if(count+1==N){
            return true;
        }
        vis[u] = true;
        for(int v: adj[u]){
            if(vis[v]==false){
                if(dfs(v, N, adj, vis, count+1)){
                    return true;
                }
            }
        }
        vis[u] = false;
        return false;
    } 
    bool check(int N,int M,vector<vector<int>> Edges)
    {
        // code here
        vector<vector<int>> adj(N);
        for(vector<int> x: Edges){
            int u = x[0]-1;
            int v = x[1]-1;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> vis(N, false);
        for(int i=0; i<N; i++){
            if(dfs(i, N, adj, vis, 0)){
                return true;
            }
        }
        return false;
    }
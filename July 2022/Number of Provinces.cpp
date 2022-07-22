void dfs(int node, vector<vector<int>> adj, int V, vector<bool> &vis){
        vis[node] = true;
        for(int i=0; i<V; i++){
            if(i==node){
                continue;
            }else if(adj[node][i]==1 && vis[i]==false){
                dfs(i, adj, V, vis);
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<bool> vis(V, false);
        int count=0;
        for(int i=0; i<V; i++){
            if(vis[i]==false){
                dfs(i, adj, V, vis);
                count++;
            }
        }
        return count;
    }
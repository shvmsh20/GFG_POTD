 void dfs(int u, vector<vector<int>> &adj, vector<bool> &vis){
        vis[u] = true;
        for(int v: adj[u]){
            if(vis[v]==false){
                dfs(v, adj, vis);
            }
        }
    }
    int minEdgesReq(int n, vector<vector<int>>& edges) {
        // code here
        int m = edges.size();
        if(m<n-1){
            return -1;
        }
        int totalComponents = 0;
        vector<bool> vis(n, false);
        vector<vector<int>> adj(n);
        for(vector<int> e: edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        for(int i=0; i<n; i++){
            if(vis[i]==false){
                dfs(i, adj, vis);
                totalComponents++;
            }
        }
        int extraEdges = m-(totalComponents-1);
        return extraEdges>=(totalComponents-1) ? (totalComponents-1): -1;
    }
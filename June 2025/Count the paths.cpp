int solve(int u, int dest, vector<vector<int>> &adj, 
    unordered_set<int> &vis, vector<int> &dp){
        if(u==dest) return 1;
        if(dp[u]!=-1) return dp[u];
        int res = 0;
        vis.insert(u);
        for(int v: adj[u]){
            if(vis.find(v)==vis.end()){
                res+= solve(v, dest, adj, vis, dp);
            }
        }
        vis.erase(u);
        return dp[u] = res;
    }
    int countPaths(vector<vector<int>>& edges, int V, int src, int dest) {
        // Code here
        vector<vector<int>>adj(V);
        for(vector<int> x: edges){
            adj[x[0]].push_back(x[1]);
        }
        unordered_set<int> vis;
        vector<int> dp(V, -1);
        return solve(src, dest, adj, vis, dp);
    }
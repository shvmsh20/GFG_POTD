bool isCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        vector<bool> visited(V, false);        
        visited[0] = true;
        
        for(auto &i : edges) {
            int u = i[0], v = i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
            
        function<bool(int, int)> dfs = [&](int curr, int prev) -> bool {
            bool res = false;
            for(auto i : adj[curr]) {
                if(i != prev && visited[i] == true) return true;
                else if(i != prev) {
                    visited[i] = true;
                    res |= dfs(i, curr);
                    if(res) return res;
                }
            }
            return res;
        };
        
        return dfs(0, -1);
    }
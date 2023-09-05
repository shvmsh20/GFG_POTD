vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        // Code here
        vector<vector<int>> adj(V);
        for(auto p: edges){
            adj[p.first].push_back(p.second);
            adj[p.second].push_back(p.first);
        }
        return adj;
    }
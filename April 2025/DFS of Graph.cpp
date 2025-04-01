void dfs(int vertex, vector<vector<int>> &adj, unordered_set<int> &vis, vector<int> &res){
        res.push_back(vertex);
        vis.insert(vertex);
        for(int neigh: adj[vertex]){
            if(vis.find(neigh)==vis.end()){
                dfs(neigh, adj, vis, res);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int> res;
        unordered_set<int> vis;
        dfs(0, adj, vis, res);
        return res;
    }
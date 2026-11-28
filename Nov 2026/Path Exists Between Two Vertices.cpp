bool dfs(int u, int v, vector<vector<int>> &adj, unordered_set<int> &vis){
        if(u==v){
            return true;
        }
        vis.insert(u);
        for(int x: adj[u]){
            if(vis.find(x)==vis.end()){
                if(dfs(x, v, adj, vis)){
                    return true;
                }
            }
        }
        return false;
    }
    bool checkPath(vector<vector<int>> &adj, int u, int v) {
        // code here
        unordered_set<int> vis;
        return dfs(u, v, adj, vis);
    }
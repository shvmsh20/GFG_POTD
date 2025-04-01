vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        vector<int> res;
        queue<int> q;
        q.push(0);
        unordered_set<int> vis;
        vis.insert(0);
        while(!q.empty()){
            int n = q.size();
            for(int i=0; i<n; i++){
                int u = q.front();
                q.pop();
                res.push_back(u);
                for(int v: adj[u]){
                    if(vis.find(v)==vis.end()){
                        vis.insert(v);
                        q.push(v);
                    }
                }
            }
        }
        return res;
    }
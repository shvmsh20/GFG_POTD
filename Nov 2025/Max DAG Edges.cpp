int maxEdgesToAdd(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        vector<int> indeg(V);
        set<vector<int>> edg(edges.begin(), edges.end());
        for (int i = 0; i < edges.size(); i++){
            int u = edges[i][0], v = edges[i][1];
            adj[u].push_back(v);
            indeg[v]++;
        }
        queue<int> q;
        for (int i = 0; i < V; i++){
            if (indeg[i] == 0) q.push(i);
        }
        int ans = 0;
        vector<int> topo;
        while (!q.empty()){
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for (int nbr : adj[node]){
                indeg[nbr]--;
                if (indeg[nbr] == 0) q.push(nbr);
            }
        }
        for (int i = 0; i < topo.size(); i++){
            for (int j = i+1; j < topo.size(); j++){
                if (!edg.count({topo[i], topo[j]})) ans++;
            }
        }
        return ans;
    }
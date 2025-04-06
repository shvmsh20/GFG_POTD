vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<int> adj[V];
        for(auto it: edges) {
            int u = it[0], v = it[1];
            adj[u].push_back(v);
        }
        
       
        int inDegree[V] = {0};
        for(int i=0; i<V; i++) {
            for(auto it: adj[i])
                inDegree[it]++;
        }
        
       
        queue<int> q;
        for(int i=0; i<V; i++) {
            if(inDegree[i] == 0)
                q.push(i);
        }
        
       
        vector<int> res;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            
            res.push_back(node);
            
            for(auto it: adj[node]) {
                inDegree[it]--;
                if(inDegree[it] == 0)
                    q.push(it);
            }
        }
        
        return res;
    }
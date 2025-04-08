 void bfs(int u, vector<vector<int>> &adj, unordered_set<int> &vis){
        vis.insert(u);
        queue<int> q;
        q.push(u);
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(int v: adj[u]){
                if(vis.find(v)==vis.end()){
                    vis.insert(v);
                    q.push(v);
                }
            }
        }
    }
    bool isBridge(int V, vector<vector<int>> &edges, int c, int d) {
        // Code here
        vector<vector<int>> adj(V);
        for(vector<int> x: edges){
            int u = x[0], v = x[1];
            if((u==c && v==d) || (u==d && v==c)){
                continue;
            }
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        unordered_set<int> vis;
        int cnt = 0;
        for(int i=0; i<V; i++){
            if(vis.find(i)==vis.end()){
                bfs(i, adj, vis);
                cnt++;
            }
        }
        unordered_set<int> visN;
        vector<vector<int>> adjN(V);
        for(vector<int> x: edges){
            int u = x[0], v = x[1];
            adjN[u].push_back(v);
            adjN[v].push_back(u);
        }
        int cntN = 0;
        for(int i=0; i<V; i++){
            if(visN.find(i)==visN.end()){
                bfs(i, adjN, visN);
                cntN++;
            }
        }
        // cout << cnt << " " << cntN;
        return cnt-cntN==1;
    }
vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
        // Code here
        vector<int> dist(V, 1e8);
        dist[S]=0;
        for(int i=1; i<=V-1; i++){
            for(auto x: adj){
                int u = x[0];
                int v = x[1];
                int wt = x[2];
                if(dist[v]>dist[u]+wt){
                    dist[v] = dist[u]+wt;
                }
            }
        }
        return dist;
    }
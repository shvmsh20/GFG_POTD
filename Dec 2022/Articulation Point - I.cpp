int t=0;
  void dfs(int u, vector<int>adj[], vector<int> &disc, vector<int> &low, 
  vector<bool> &vis, vector<int> &parent, vector<bool> &points){
      t++;
      disc[u] = t;
      low[u] = t;
      vis[u] = true;
      int children=0;
      for(int v: adj[u]){
          if(vis[v]==false){
              children++;
              parent[v] = u;
              dfs(v, adj, disc, low, vis, parent, points);
              low[u] = min(low[u], low[v]);
              if(parent[u]==-1 && children>1){
                 points[u] = true;
              }else if(parent[u]!=-1 && low[v]>=disc[u]){
                  points[u] = true;
              }
          }else if(v!=parent[u]){
              low[u] = min(low[u], disc[v]);
          }
      }
      
  }
    vector<int> articulationPoints(int V, vector<int>adj[]) {
        // Code here
        vector<int> res;
        vector<int> disc(V);
        vector<int> low(V);
        vector<bool> vis(V, false);
        vector<bool> points(V, false);
        vector<int> parent(V, -1);
        for(int i=0; i<V; i++){
            if(vis[i]==false){
                dfs(i, adj, disc, low, vis, parent, points);
            }
        }
        for(int i=0; i<V; i++){
            if(points[i]){
                res.push_back(i);
            }
        }
        if(res.empty()){
            res.push_back(-1);
        }
        return res;
    }
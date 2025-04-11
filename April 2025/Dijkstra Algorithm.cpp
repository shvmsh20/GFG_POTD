vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
       vector<pair<int,int>> adj[V];
       
       for(int i=0;i<edges.size();i++){
           adj[edges[i][0]].push_back({edges[i][2],edges[i][1]});
           adj[edges[i][1]].push_back({edges[i][2],edges[i][0]});
       }
       
       
       vector<int> dist(V,1e9),vis(V,0);
       dist[src] = 0;
      
       
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    
       pq.push({0,src});
       
       while(!pq.empty()){
           auto it = pq.top();
           pq.pop();
           int wt = it.first;
           int node = it.second;
           
           if(vis[node]) continue;
           
           vis[node] = 1;
           
           for(auto t : adj[node]){
               int d = t.first;
               int adjNode = t.second;
               
               if(!vis[adjNode] && wt + d < dist[adjNode]){
                   dist[adjNode] = wt + d;
                   pq.push({wt+d,adjNode});
               }
           }
       }
       
       return dist;
        
    }
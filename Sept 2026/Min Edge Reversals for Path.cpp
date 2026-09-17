 int minimumEdgeReversal(vector<vector<int>> &edges, int n, int src, int dst) {
        // code here  
        unordered_map<int, vector<pair<int, int>>> adj;

          for (auto& edge : edges) {

              int u = edge[0];
              int v = edge[1];

              adj[u].push_back({v, 0});
              adj[v].push_back({u, 1});
          }

          vector<int> dist(n+1, INT_MAX);
          // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
          queue<pair<int, int>> q;
          q.push({0, src});
          // pq.push({0, src});
          dist[src] = 0;

          while (!q.empty()) {

              // auto [w, u] = pq.top();
              auto [w, u] = q.front();
              q.pop();
              // pq.pop();


              for (auto& [v, d] : adj[u]) {

                  if (w + d < dist[v]) {
                      dist[v] = w + d;
                      // pq.push({w + d, v});
                      q.push({w+d, v});
                  }
              }
          }

          return (dist[dst] != INT_MAX) ? dist[dst] : -1;
    }
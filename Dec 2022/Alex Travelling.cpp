struct cmp{
        bool operator()(vector<int> &a, vector<int> &b){
            return a[1]>b[1];
        }
    };
    int minimumCost(vector<vector<int>>& flights, int n, int k) {
        // code here
        vector<int> dist(n+1, INT_MAX);
        vector<vector<int>> adj[n+1];
        for(auto x: flights){
            int u = x[0], v = x[1], d = x[2];
            adj[u].push_back({v, d});
        }
        vector<bool> vis(n+1, false);
        dist[k] = 0;
        
        priority_queue<vector<int>, vector<vector<int>>, cmp> pq;
        pq.push({k, 0});
        while(!pq.empty()){
            vector<int> x = pq.top();
            pq.pop();
            if(vis[x[0]]){
                continue;
            }
            int u = x[0], d = x[1];
            vis[u] = true;
            for(auto x: adj[u]){
                if(vis[x[0]]==false && (x[1]+d)<dist[x[0]]){
                    dist[x[0]] = x[1]+d;
                    pq.push({x[0], dist[x[0]]});
                }
            }
        }
        int res = INT_MIN;
        for(int i=1; i<=n; i++){
            //cout << dist[i] << " ";
            if(dist[i]==INT_MAX){
                return -1;
            }
            res = max(res, dist[i]);
        }
        return res;
    }
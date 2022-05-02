int bfs(int u, int N, vector<bool> &v, vector<vector<int>> &adj){
        queue<int> q;
        q.push(u);
        v[u] = true;
        int mx=0;
        while(!q.empty()){
            int size = q.size();
            for(int i=0; i<size; i++){
                int node = q.front();
                q.pop();
                for(int x: adj[node]){
                    if(v[x]==false){
                        q.push(x);
                        v[x] = true;
                    }
                }
            }
            mx++;
        }
        return mx-1;
    }
    int partyHouse(int N, vector<vector<int>> &adj){
        int mx = INT_MAX;
        for(int i=1; i<=N; i++){
            vector<bool> v(N+1, false);
            int temp = bfs(i, N, v, adj);
            mx = min(mx, temp);
        }
        return mx;
    }
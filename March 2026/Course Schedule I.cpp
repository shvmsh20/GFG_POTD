bool canFinish(int n, vector<vector<int>>& prerequisites) {
        // Code here
        vector<vector<int>> adj(n);
        vector<int> inEdges(n);
        for(auto it: prerequisites){
            adj[it[1]].push_back(it[0]);
            inEdges[it[0]]++;
        }
        queue<int> q;
        for(int i=0; i<n; i++){
            if(inEdges[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int m = q.size();
            while(m--){
                int u = q.front();
                q.pop();
                for(int v: adj[u]){
                    inEdges[v]--;
                    if(inEdges[v]==0){
                        q.push(v);
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            if(inEdges[i]){
                return false;
            }
        }
        return true;
    }
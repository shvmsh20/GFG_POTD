int minColour(int N, int M, vector<int> mat[]) {
        // code here
        vector<vector<int>> adj(N + 1);
        vector<int> deg(N + 1, 0);
        for(int i = 0; i < M; i++){
            adj[mat[i][0]].push_back(mat[i][1]);
            deg[mat[i][1]]++;
        }
        queue<int> q;
        int level = 0;
        for(int i = 1; i <= N; i++){
            if(deg[i] == 0) q.push(i);
        }
        
        while(!q.empty()){
            int sz = q.size();
            for(int i = 0; i < sz; i++){
                int node = q.front();
                q.pop();
                for(int child : adj[node]){
                    deg[child]--;
                    if(deg[child] == 0){
                        q.push(child);
                    }
                }
            }
            level++;
        }
        return level;
    }
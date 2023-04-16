vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
        //code here
        vector<vector<int>> adj(n);
        for(auto x: prerequisites){
            int u = x[0];
            int v = x[1];
            adj[v].push_back(u);
        }
        vector<int> inDeg(n, 0);
        for(int i=0; i<n; i++){
            for(int v: adj[i]){
                inDeg[v]++;
            }
        }
        queue<int> q;
        vector<int> res;
        int cnt=0;
        for(int i=0; i<n; i++){
            if(inDeg[i]==0){
                q.push(i);
                res.push_back(i);
                cnt++;
            }
        }
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(int v: adj[u]){
                inDeg[v]--;
                if(inDeg[v]==0){
                    q.push(v);
                    res.push_back(v);
                    cnt++;
                }
            }
        }
        
        if(cnt==n){
            return res;
        }else{
            return {};
        }
    }
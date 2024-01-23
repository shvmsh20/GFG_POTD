vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
        //code here
        vector<vector<int>> graph(n);
        vector<int> inDeg(n, 0);
        for(int i=0; i<m; i++){
            graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
            inDeg[prerequisites[i][0]]++;
        }
        queue<int> q;
        for(int i=0; i<n; i++){
            if(inDeg[i]==0){
                q.push(i);
            }
        }
        vector<int> res;
        while(!q.empty()){
            int size = q.size();
            for(int i=0; i<size; i++){
                int node = q.front();
                res.push_back(node);
                q.pop();
                for(int neigh: graph[node]){
                    inDeg[neigh]--;
                    if(inDeg[neigh]==0){
                        q.push(neigh);
                    }
                }
            }
        }
        if(res.size()==n){
            return res;
        }
        return {};
    }
bool dfs(int node, int parent, vector<bool> &vis, vector<vector<int>> &graph){
        if(vis[node]){
            return true;
        }
        vis[node] = true;
        for(int neigh: graph[node]){
            if(neigh!=parent && dfs(neigh, node, vis, graph)){
                return true;
            }
        }
        return false;
    }
    int isTree(int n, int m, vector<vector<int>> &adj) {
        // code here
        vector<vector<int>> graph(n);
        for(auto x: adj){
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
        vector<bool> vis(n, false);
        if(dfs(0, -1, vis, graph)){
            return 0;
        }
        for(int i=0; i<n; i++){
            if(!vis[i]){
                return 0;
            }
        }
        return 1;
    }
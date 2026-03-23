void dfs(int u, vector<int> &e, vector<bool> &vis, vector<bool> &inRec,
    vector<int> &count, int &res){
        vis[u] = true;
        inRec[u] = true;
        int v = e[u];
        if(v==-1){
            inRec[u] = false;
            return;
        }
        if(!vis[v]){
            count[v] = count[u]+1;
            dfs(v, e, vis, inRec, count, res);
        }else if(inRec[v]){
            res = max(res, count[u]-count[v]+1);
        }
        inRec[u] = false;
    }
    int longestCycle(int V, vector<vector<int>>& edges) {
        // code here
        vector<int> e(V, -1);
        for(auto it: edges){
            e[it[0]] = it[1];
        }
        int res = -1;
        vector<bool> vis(V, false);
        vector<bool> inRec(V, false);
        vector<int> count(V, 1);
        for(int i=0; i<V; i++){
            if(!vis[i]){
                dfs(i, e, vis, inRec, count, res);
            }
        }
        return res;
    }
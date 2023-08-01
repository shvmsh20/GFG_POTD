vector<int>ans;
    void solve(vector<int>adj[],vector<int>&vis,int start){
        for(auto it:adj[start]){
            if(vis[it]==0){
                // cout<<it<<" ";
                vis[it]=1;
                ans.push_back(it);
                solve(adj,vis,it);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V,0);
        ans.push_back(0);
        vis[0]=1;
        solve(adj,vis,0);
        return ans;
    }
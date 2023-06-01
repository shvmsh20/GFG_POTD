void dfs(int u, vector<int> adj[], vector<int> &res, vector<bool> &vis){
	    vis[u] = true;
	    for(int v: adj[u]){
	        if(vis[v]==false){
	           dfs(v, adj, res, vis);
	        }
	    }
	    res.push_back(u);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> res;
	    vector<bool> vis(V, false);
	    for(int i=0; i<V; i++){
	        if(vis[i]==false){
	            dfs(i, adj, res, vis);
	        }
	    }
	    reverse(res.begin(), res.end());
	    return res;
	}
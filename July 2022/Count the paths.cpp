int count=0;
    void rec(int s, int d, vector<vector<int>> &adj){
        if(s==d){
            count++;
            return;
        }
        for(int x: adj[s]){
            rec(x, d, adj);
        }
    }
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    // Code here
	    vector<vector<int>> adj(n);
	    for(auto x: edges){
	        adj[x[0]].push_back(x[1]);
	    }
	    rec(s, d, adj);
	    return count;
	}
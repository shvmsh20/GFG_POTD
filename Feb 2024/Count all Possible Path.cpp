void dfs(int node, vector<vector<int>>& paths, vector<bool>& vis) {
        vis[node] = true;
        
        for(int i=0; i<paths.size(); i++) {
            for(int j=0; j<paths.size(); j++) {
                if(paths[i][j] && !vis[j]) {
                    dfs(j, paths, vis);
                }
            }
        }
    }

	int isPossible(vector<vector<int>>paths){
	    // Check whether the graph is connected or not?
	    int n = paths.size();
	    vector<bool> vis(n, false);
	    
	    dfs(0, paths, vis);
	    
	    for(int i=0; i<n; i++) {
	        if(!vis[i]) {
	            return 0;
	        }
	    }
	    
	    // Count the degree of nodes
	    vector<int> degree(n, 0);
	    for(int i=0; i<n; i++) {
	        int cnt = 0;
	        for(int j=0; j<n; j++) {
	            if(paths[i][j]) {
	                cnt++;
	            }
	        }
	        degree[i] = cnt;
	    }
	    
	    int oddDegree = 0;
	    
	    for(int i=0; i<n; i++) {
	        if(degree[i] & 1) {
	            oddDegree++;
	        }
	    }
	    
	    return oddDegree == 0 ? 1 : 0;
	}
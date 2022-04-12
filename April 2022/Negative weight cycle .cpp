nt isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    vector<int> d(n, INT_MAX);
	    d[0] = 0;
	    for(int i=0; i<n-1; i++){
	        for(auto x: edges){
	            int u = x[0];
	            int v = x[1];
	            int wt = x[2];
	            if(d[u]!=INT_MAX && d[v]>d[u]+wt){
	                d[v] = d[u]+wt;
	            }
	        }
	    }
	    for(auto x: edges){
	            int u = x[0];
	            int v = x[1];
	            int wt = x[2];
	            if(d[u]!=INT_MAX && d[v]>d[u]+wt){
	                return 1;
	            }
	        }
	   return 0; 
	}
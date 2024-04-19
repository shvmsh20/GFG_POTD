vector<int> findMissing(int a[], int b[], int n, int m) 
	{ 
	    // Your code goes here
	    unordered_set<int> s;
	    for(int i=0; i<m; i++){
	        s.insert(b[i]);
	    }
	    vector<int> res;
	    for(int i=0; i<n; i++){
	        if(s.find(a[i])==s.end()){
	            res.push_back(a[i]);
	        }
	    }
	    return res;
	}
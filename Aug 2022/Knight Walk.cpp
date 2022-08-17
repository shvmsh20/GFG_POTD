int minStepToReachTarget(vector<int>&kP, vector<int>&tP, int n){
	    // Code here
	    pair<int,int> okP;
	    pair<int,int> otP;
	    
	    okP.first = n - kP[1];
	    okP.second = kP[0] - 1;
	    
	    otP.first = n - tP[1];
	    otP.second = tP[0] - 1;
	    
	    vector<vector<int>> vis(n, vector<int> (n, 0));
	    
	    int count = 0;
	    
	    queue<pair<int,int>> q;
	    q.push(okP);
	    q.push({-1, -1});
	    
	    vector<int> dx = {-2, -1, 1, 2, 2, 1, -1, -2};
	    vector<int> dy = {-1, -2, -2, -1, 1, 2, 2, 1};
	    
	    while(!q.empty()){
	        pair<int,int> temp = q.front();
	        q.pop();
	        
	        if(temp.first == -1 && temp.second == -1){
	            q.push({-1, -1});
	            count++;
	            continue;
	        }
	        
	        if(temp == otP){
	            return count;
	        }
	        
	        for(int i = 0; i < 8; i++){
	            int ti = temp.first + dx[i];
	            int tj = temp.second + dy[i];
	            
	            if(ti >= 0 && tj >= 0 && ti < n && tj < n && !vis[ti][tj]){
	                vis[ti][tj] = 1;
	                q.push({ti, tj});
	            }
	        }
	    }
	    
	    
	    return -1;
	}
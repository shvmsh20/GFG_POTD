vector<int>SolveQueris(string str, vector<vector<int>>Query){
	    // Code here
	    int n = str.size();
	    int dp[26][n+1];
	    for(int i=0; i<26; i++){
	        dp[0][i] = 0;
	    }
	    for(int i=0; i<26; i++){
	        for(int j=1; j<n+1; j++){
	            if(str[j-1]=='a'+i){
	                dp[i][j] = dp[i][j-1]+1;
	            }else{
	                dp[i][j] = dp[i][j-1];
	            }
	        }
	    }
	    vector<int> res;
	    for(auto q: Query){
	        int count=0;
	        int l = q[0];
	        int r = q[1];
	        for(int i=0; i<26; i++){
	            if(dp[i][l-1]!=dp[i][r]){
	                count++;
	            }
	        }
	        res.push_back(count);
	    }
	    return res;
	}
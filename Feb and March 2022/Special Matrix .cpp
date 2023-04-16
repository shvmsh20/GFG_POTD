int FindWays(int n, int m, vector<vector<int>>blocked_cells){
	    // Code here
	    vector<vector<int>> v( n , vector<int> (m, 0));
	    for(int i=0; i<blocked_cells.size(); i++){
	        int x = blocked_cells[i][0]-1;
	        int y = blocked_cells[i][1]-1;
	        v[x][y]=-1;
	    }
	    int i, j;
	    for(i=0; i<m; i++){
	        if(v[0][i]==-1){
	            break;
	        }else{
	            v[0][i]=1;
	        }
	    }
	    for(i=0; i<n; i++){
	        if(v[i][0]==-1){
	            break;
	        }else{
	            v[i][0]=1;
	        }
	    }
	    
	    for(i=1;i<n;i++){
	        for(j=1;j<m;j++){
	            if(v[i][j]==-1){
	                continue;
	            }
	            int temp=0;
	            if(v[i-1][j]!=-1){
	                temp+=v[i-1][j];
	            }
	            if(v[i][j-1]!=-1){
	                temp = (temp+v[i][j-1])%1000000007;
	            }
	            v[i][j] = temp;
	        }
	    }
	    return v[n-1][m-1]==-1?0:v[n-1][m-1]%1000000007;
	    
	}
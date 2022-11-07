void shortest_distance(vector<vector<int>>&matrix){
	    // Code here
	    int n = matrix.size();
	   
	    for(int k=0; k<n; k++){
	        for(int i=0; i<n; i++){
	            for(int j=0; j<n; j++){
	                if(i==k || j==k || matrix[i][k]==-1 || matrix[k][j]==-1){
	                    continue;
	                }else{
	                    matrix[i][j] = min(matrix[i][j]==-1?INT_MAX:matrix[i][j], matrix[i][k]+matrix[k][j]);
	                }
	            }
	        }
	    }
	}
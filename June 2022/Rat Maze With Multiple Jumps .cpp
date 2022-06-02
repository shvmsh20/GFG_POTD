bool isSafe(int x, int y, int n, vector<vector<int>> &matrix){
        if(x>=n || y>=n || matrix[x][y]==0){
            return false;
        }
        return true;
    }
    bool solve(int x, int y, int n, vector<vector<int>> &matrix, vector<vector<int>> &v){
        if(x==n-1 && y==n-1){
            v[x][y]=1;
            return true;
        }
        if(isSafe(x, y, n, matrix)){
            v[x][y]=1;
            int val = matrix[x][y];
            for(int i=1; i<=val; i++){
                if(solve(x, y+i, n, matrix, v)){
                    return true;
                }
                if(solve(x+i, y, n, matrix, v)){
                    return true;
                }
            }
            v[x][y]=0;
            
        }
        return false;
        
        
    }
	vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
	   // Code here
	   int n = matrix.size();
	   vector<vector<int>> v(n, vector<int> (n, 0));
	   vector<vector<int>> v2 = {{-1}};
	   
	   if(solve(0, 0, n, matrix, v)==false){
	       return v2;
	   }

	   return v;
	}
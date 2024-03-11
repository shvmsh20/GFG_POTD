int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	     int row1 = 0,col1 = 0,row2 = n-1,col2 = n-1 , count = 0;
        
        while(row1 < n && row2 > -1){
            int sum = mat1[row1][col1] + mat2[row2][col2];
            
            if(sum == x){
                count++;
                col1++;
                col2--;
            }
            else if(sum < x){
                col1++;
            }
            else
            col2--;
            
            if(col1 == n){
                row1++;
                col1 = 0;
            }
            if(col2 == -1){
                row2--;
                col2 = n-1;
            }
        }
        return count;
	}
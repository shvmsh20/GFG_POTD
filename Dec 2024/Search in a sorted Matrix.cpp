 bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int row = -1, n = mat.size(), m = mat[0].size();
        for(int i=0; i<n; i++){
            if(mat[i][m-1]>=x){
                row  = i;
                break;
            }
        }
        if(row==-1){
            return false;
        }
        if(!(x>=mat[row][0] && x<=mat[row][m-1])){
            return false;
        }
        int st = 0, end = m-1;
        while(st<=end){
            int mid = (st+end)/2;
            if(mat[row][mid]==x){
                return true;
            }else if(mat[row][mid]<x){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return false;
        
    }
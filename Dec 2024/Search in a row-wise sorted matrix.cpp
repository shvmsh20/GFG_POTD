bool solve(int row, int st, int end, int x, vector<vector<int>> &mat){
        if(!(x>=mat[row][st] && x<=mat[row][end])){
            return false;
        }
        while(st<=end){
            int mid = st+(end-st)/2;
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
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0; i<n; i++){
            if(solve(i, 0, m-1, x, mat)){
                return true;
            }
        }
        return false;
    }
vector<int> findMaxRow(vector<vector<int>> mat, int n) {
        //code here
        int res = 0, lstIndex = n-1, rowNo = 0, ans = 0;
        for(int i=0; i<n; i++){
            while(lstIndex>=0 && mat[i][lstIndex]==1){
                lstIndex--;
            }
            ans = n - lstIndex - 1;
            if(ans>res){
                res = ans;
                rowNo = i;
            }
        }
        vector<int> tmp = {rowNo, res};
        return tmp;
        
    }
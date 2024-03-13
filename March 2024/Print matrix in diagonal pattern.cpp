vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
         bool flag =false;
        int dig =0;
        vector<int> res;
        while(dig <= 2*mat.size()-2){
            if(flag){
                for(int i=0; i<=dig; i++){
                    if(max(dig-i, i) < mat.size()){
                        res.push_back(mat[i][dig-i]);
                    }
                    
                }
                flag =false;
            }
            else{
                for(int j=0; j<=dig; j++){
                    if(max(dig-j, j) < mat.size()){
                        res.push_back(mat[dig-j][j]);
                    }
                }
                flag =true;
            }
            dig++;
        }
        return res;
    }
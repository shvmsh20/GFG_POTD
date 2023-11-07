vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
         vector<int> ans;
        int sum = 0;
        int sum2 = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j){
                    sum2 += matrix[i][j];
                    sum += matrix[i][j];
                }
                else if(i < j) sum += matrix[i][j];
                else sum2 += matrix[i][j];
            }
            
        }
        ans.push_back(sum);
        ans.push_back(sum2);
        return ans;
    }
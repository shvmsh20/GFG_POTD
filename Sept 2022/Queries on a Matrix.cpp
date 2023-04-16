vector<vector<int>> solveQueries(int n, vector<vector<int>> Queries) {
        vector<vector<int>> res(n, vector<int>(n, 0));

        for(auto q : Queries){
            int a=q[0] , b=q[1] , c=q[2] , d=q[3];
            for(int i=a; i<=c; i++){
                for(int j=b; j<=d; j++)
                    res[i][j]++;
            }
        }
        return res;
}
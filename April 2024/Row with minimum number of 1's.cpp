int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        int mn = INT_MAX, res = 0;
        for(int i=0; i<n; i++){
            int cnt = 0;
            for(int j=0; j<m; j++){
                if(a[i][j]==1){
                    cnt++;
                }
            }
            if(cnt<mn){
                mn = cnt;
                res = i+1;
            }
        }
        return res;
    }
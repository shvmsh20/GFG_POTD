vector<int> FindWays(vector<vector<int>>&matrix){
    // Code here
    int n = matrix.size();
    int mod = 1e9+7;
    pair<int, int> dp[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            dp[i][j] = {0, matrix[i][j]};
        }
    }
    dp[0][0].first=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int down=0, right=0, down_sum=0, right_sum=0;
            if(i!=0 && matrix[i-1][j]>=2 && dp[i-1][j].first!=0){
                down+= dp[i-1][j].first;
                down_sum = dp[i-1][j].second;
            }
            if(j!=0 && (matrix[i][j-1]==1 || matrix[i][j-1]==3) && dp[i][j-1].first!=0){
                right+= dp[i][j-1].first;
                right_sum = dp[i][j-1].second;
            }
            dp[i][j].first = max(dp[i][j].first, (right+down)%mod);
            dp[i][j].second = (dp[i][j].second + max(right_sum, down_sum)%mod)%mod;
        }
    }
    vector<int> res(2);
    res[0] = dp[n-1][n-1].first;
    res[1] = res[0]?dp[n-1][n-1].second:0;
    return res;
}
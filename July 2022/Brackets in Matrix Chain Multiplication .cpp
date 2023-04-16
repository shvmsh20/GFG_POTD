string matrixChainOrder(int p[], int n){
        // code here
        long long dp[n][n];
        memset(dp, 0, sizeof(dp));
        vector<vector<string>> sp(n , vector<string> (n , ""));
        for(int g=0; g<n-1; g++){
            for(int i=0, j=g ; i < n-1 && j < n-1 ; i++ , j++ ){
                if(g == 0){
                    dp[i][j] = 0;
                    sp[i][j] = "";
                    sp[i][j].push_back('A' + i);
                    
                }
                else if(g == 1){
                    dp[i][j] = p[i] * p[j] * p[j+1];
                    string str = "(";
                    str.push_back(('A' + i));
                    str.push_back(('A' + j));
                    str.push_back(')');
                    sp[i][j] = str;
                }
                else{
                    dp[i][j] = 1e18;
                    for(int k= i; k<j; k++){
                        long long ope =dp[i][k] + dp[k+1][j]   + p[i]*p[k+1]*p[j+1];
                        if(ope < dp[i][j]){
                            dp[i][j] = ope;
                            sp[i][j] ="("  +sp[i][k]  + sp[k+1][j] + ")";
                            
                        }
                    }
                }
            }
        }
         return sp[0][n-2];
    }
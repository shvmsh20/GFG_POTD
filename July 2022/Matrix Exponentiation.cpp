int MOD = 1e9+7;
    vector<vector<long long int>> multiply(vector<vector<long long int>> &a, vector<vector<long long int>>&b){
        int n = a.size();
        vector<vector<long long int>> res(n, vector<long long int> (n, 0));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                for(int k=0; k<n; k++){
                    res[i][j] = (res[i][j]+((a[i][k]%MOD)*(b[k][j]%MOD))%MOD)%MOD;
                }
            }
        }
        return res;
    }
    vector<vector<long long int>> matrixExp(vector<vector<long long int>> &a, long long int n){
        if(n==0){
            int sz = a.size();
            vector<vector<long long int>> res(sz, vector<long long int> (sz, 0));
            for(int i=0; i<sz; i++){
                res[i][i]=1;
            }
            return res;
        }else if(n==1){
            return a;
        }
        vector<vector<long long int>> t = matrixExp(a, n/2);
        vector<vector<long long int>> res = multiply(t, t);
        if(n&1){
            res = multiply(res, a);
        }
        return res;
    }
    int FindNthTerm(long long int n) {
        // Code here
        
        vector<vector<long long int>> a = {{1, 1}, {1, 0}};
        vector<vector<long long int>> ans = matrixExp(a, n);
        return (ans[0][0])%MOD;
    }
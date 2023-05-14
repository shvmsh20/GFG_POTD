long long solve(vector<int> &A, int idx, bool prev, vector<vector<int>>& dp){
        if(idx >= A.size()) return 0;
        if(dp[idx][prev] != -1) return dp[idx][prev];
        long long ans;
        if(prev == false){
            ans = max(solve(A, idx+1, true, dp), A[idx] + solve(A, idx+1, false, dp));
        }
        else{
            ans = A[idx] + solve(A, idx+1, false, dp);
        }
        return dp[idx][prev] = ans;
    }
    long long findMaxSubsetSum(int N, vector<int> &A) {
        vector<vector<int>> dp(N, vector<int>(2, -1));
        return solve(A, 0, false, dp);
    }
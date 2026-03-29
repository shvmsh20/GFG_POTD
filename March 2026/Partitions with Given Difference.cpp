int solve(int index, int n, vector<int> &arr, int diff, int curr, int req, vector<vector<int>> &dp){
        if(index==n){
            if(curr == req){
                return 1;
            }else{
                return 0;
            }
        }
        if(curr>req){
            return 0;
        }
        if(dp[index][curr]!=-1){
            return dp[index][curr];
        }
        int res = solve(index+1, n, arr, diff, curr+arr[index], req, dp);
        res+= solve(index+1, n, arr, diff, curr, req, dp);
        return dp[index][curr] = res;
    }
    
    int countPartitions(vector<int>& arr, int diff) {
        // Code here
        int n = arr.size();
        int totalSum = 0;
        for(int x: arr){
            totalSum+= x;
        }
        if((totalSum+diff)%2!=0){
            return 0;
        }
        int req = (totalSum+diff)/2;
        vector<vector<int>> dp(n, vector<int> (req+1, -1));
        int curr = 0;
        int res = solve(0, n, arr, diff, curr, req, dp);
        return res;
    }
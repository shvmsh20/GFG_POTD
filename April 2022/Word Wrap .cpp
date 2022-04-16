int solveWordWrap(vector<int>nums, int k) 
    { 
        // Code here
        int n = nums.size();
        int spaces[n][n];
        for(int i=0; i<n; i++){
            spaces[i][i] = k-nums[i];
            for(int j=i+1; j<n; j++){
                spaces[i][j] = spaces[i][j-1] - nums[j]-1;
            }
        }
        int cost[n][n];
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                cost[i][j] = (j==n-1 && spaces[i][j]>=0)?0:spaces[i][j]<0?INT_MAX:spaces[i][j]*spaces[i][j];
            }
        }
        
        int mincost[n];
        int res[n];
        for(int i=n-1; i>=0; i--){
            mincost[i] = cost[i][n-1];
            res[i] = n;
            for(int j=n-1; j>i; j--){
                if(cost[i][j-1]==INT_MAX){
                    continue;
                }else{
                    if(mincost[i]>cost[i][j-1]+mincost[j]){
                        mincost[i] = cost[i][j-1]+mincost[j];
                        res[i] = j;
                    }
                }
            }
        }
        return mincost[0];
    } 
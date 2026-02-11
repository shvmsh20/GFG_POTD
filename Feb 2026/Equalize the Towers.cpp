int solve(int currValue, vector<int> &heights, vector<int> &cost, int n){
        int res = 0;
        for(int i=0; i<n; i++){
            res+= (abs(currValue-heights[i]))*cost[i];
        }
        return res;
    }
    int minCost(vector<int>& heights, vector<int>& cost) {
        // code here
        int n = heights.size(), lo = INT_MAX, hi = INT_MIN;
        for(int i=0; i<n; i++){
            lo = min(lo, heights[i]);
            hi = max(hi, heights[i]);
        }
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            int costBeforeMid = solve(mid-1, heights, cost, n);
            int costAtMid = solve(mid, heights, cost, n);
            int costAfterMid = solve(mid+1, heights, cost, n);
            if(costBeforeMid>=costAtMid && costAtMid<=costAfterMid){
                return costAtMid;
            }else if(costBeforeMid>=costAtMid && costAtMid>=costAfterMid){
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }
        return -1;
    }
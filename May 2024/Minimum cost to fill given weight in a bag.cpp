int minimumCost(int n, int w, vector<int> &cost) {
        // code here
        vector<int> prev(w+1, 1e8);
        vector<int> curr(w+1, 1e8);
        prev[0] = curr[0] = 0;
        
        for(int i = 1; i <= n; i++){
            curr[0] = 0;
            for(int k = 0; k <= w; k++){
                int nontake = prev[k];
                int take = 1e8;
                if(cost[i-1] != -1 && i <= k){
                    take = cost[i-1] + curr[k-i];
                }
                curr[k] = min(take, nontake);
            }
            prev = curr;
        }
        if(prev[w] == 1e8) return -1;
        return prev[w];
    }
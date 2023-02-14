int minCost(vector<vector<int>> &colors, int N) {
        // Write your code here.
         vector<vector<int>> cost(N, vector<int>(3,0));

        cost[0][0] = colors[0][0];

        cost[0][1] = colors[0][1];

        cost[0][2] = colors[0][2];

         for(int i=1; i<N; i++){

            cost[i][0] = min(cost[i-1][1],cost[i-1][2]) + colors[i][0];

            cost[i][1] = min(cost[i-1][0],cost[i-1][2]) + colors[i][1];

            cost[i][2] = min(cost[i-1][0],cost[i-1][1]) + colors[i][2];

        }

        

        

        return min({cost[N-1][0],cost[N-1][1],cost[N-1][2]});    
    }
void dfs(int s , vector<int>graph[] , vector<int> &dp , int par , int d){
        dp[d]++;
        for(int i = 0 ; i < graph[s].size() ; i++){
            if(graph[s][i] != par){
                dfs(graph[s][i] , graph , dp, s , 1 - d);
            }
        }
       
    }
    int countOfNodes(vector<int> graph[], int n)
    {
        // code here
         vector<int>dp(2 , 0);
        dfs(1 , graph , dp , -1 , 0);
        return ((dp[0] * (dp[0] - 1)) + (dp[1] * (dp[1] - 1))) / 2;
    }
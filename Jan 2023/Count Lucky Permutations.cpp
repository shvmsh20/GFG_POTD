long long int dp[(1<<15)+1][17];
  
  long long dfs(vector<int>& arr,int& N,int mask,int prev,int index,unordered_set<int> adj[])
  {
       int size=arr.size();
      
      if(index==size)
          return 1;
      
      if(dp[mask][prev]!=-1LL)return dp[mask][prev];

      long long ans=0;
      
      for(int i=0;i<size;i++)
      {
          if((mask&(1<<i))==0&&adj[prev].count(arr[i]))
          {
              int temp=mask|(1<<i);
              
              ans+=dfs(arr,N,temp,arr[i],index+1,adj);
          }
          else if(prev==16)
              ans+=dfs(arr,N,mask|(1<<i),arr[i],index+1,adj);
         
      }
      
      return dp[mask][prev]=ans;
     
  }
  
    long long int luckyPermutations(int N, int M, vector<int> arr,
                                    vector<vector<int>> graph) {
        
        memset(dp,-1LL,sizeof(dp));
    
        unordered_set<int> adj[17];
    
        for(auto a:graph)
        {
            adj[a[0]].insert(a[1]);
            adj[a[1]].insert(a[0]);
        }
      
        return dfs(arr,N,0,16,0,adj);
    
    }
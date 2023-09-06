void dfs(int node,vector<int>&vis,vector<int>adj[])
    {
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            dfs(it,vis,adj);
        }
    }
    
	int findMotherVertex(int V, vector<int>adj[])
	{
	   int ans=-1;
	   vector<int>vis(V,0);
	   for(int i=0;i<V;i++)
	   {
	       if(!vis[i])
	       {
	           dfs(i,vis,adj);
	           ans=i;
	       }
	   }
	   vector<int>vis2(V,0);
	   dfs(ans,vis2,adj);
	   
	   for(auto x:vis2)
	   {
	       if(x==0)return -1;
	   }
	   
	   return ans;
	}
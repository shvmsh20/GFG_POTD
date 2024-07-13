vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        vector<int> par(n+1);
        for(int i=0;i<=n;i++)par[i]=i;
       vector<vector<int>> g[n+1];
       for(auto i:edges) {
           g[i[0]].push_back({i[1],i[2]});
           g[i[1]].push_back({i[0],i[2]});
       }
      priority_queue<pii, vector<pii>, greater<pii> >q;
      q.push({0,{1,0}});
      while(q.size()) {
          auto f=q.top();
          q.pop();
          int w=f.first;
          int u=f.second.first, p=f.second.second;
          if(par[u]!=u) continue;
          par[u]=p;
          if(u==n) {
              vector<int> ans={w};
              while(u) {
                  ans.push_back(u);
                  u=par[u];
              }
              return ans;
          }
          for(auto i:g[u]) 
              if(i[0]==par[i[0]]) q.push({w+i[1],{i[0],u}});
              
      }
        return {-1};
    }
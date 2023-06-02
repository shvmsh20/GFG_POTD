 const int N=2e6+7;
    vector<bool>isPrime;//(N+1,1);
    vector<int>prime;
    int findUpar(int node, vector<int> &par)
    {
      if(node==par[node])return node;
      return par[node]=findUpar(par[node],par);
    }
     
    void merge(int u,int v,vector<int> &par,vector<int> &sz)
    {
      int ulp_u=findUpar(u,par);
      int ulp_v=findUpar(v,par);
      if(ulp_u==ulp_v)return;
      if(sz[ulp_u]<sz[ulp_v])
      {
        par[ulp_u]=ulp_v;
        sz[ulp_v]+=sz[ulp_u];
      }
      else
      {
        par[ulp_v]=ulp_u;
        sz[ulp_u]+=sz[ulp_v];
      }
    }
    void precompute(){
        isPrime.assign(N+1,1);
        isPrime[0]=isPrime[1]=0;
        for(int i=2;i*i<=N;i++){
            if(!isPrime[i]) continue;
            for(int j=i*i;j<=N;j+=i){
                isPrime[j]=0;
            }
        }
        for(int i=0;i<=N;i++)if(isPrime[i]) prime.push_back(i);
    }
    int helpSanta(int n, int m, vector<vector<int>> &g){
        // Code here
        vector<int> par(n+1),sz(n+1,1);
        for(int i=1;i<=n;i++)par[i]=i;
        // merge(1,2,par,sz);
        for(int i=1;i<=n;i++){
            for(auto &j:g[i]){
                merge(i,j,par,sz);
            }
        }
        // int ans;
        int ans=*max_element(sz.begin(),sz.end());
        return ans!=1?prime[ans-1]:-1;
    }
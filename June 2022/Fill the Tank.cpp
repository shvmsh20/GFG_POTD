using ll = long long ; 
    vector<vector<int>> g ; 
    ll dfs(int u, int p, int *cap, int n){
       ll maxi = 0 ; 
       ll mini = 1e18 ;
       ll c = 0 ; 
       for(int& v : g[u]){
           if(v != p) {
               ll x = dfs(v , u , cap , n) ; 
               maxi = max(maxi , x) ; 
               mini = min(mini , x) ;
               c++ ; 
           }
       }
       if(mini == -1) return mini ; 
       if(cap[u - 1] > (ll)1e18 -  c * maxi) return -1 ;
       return cap[u - 1] + c*maxi ;
    }
    long long minimum_amount(vector<vector<int>> &edges, int n, int src, int *cap){
       // Code here
       g = vector<vector<int>>(n + 1) ;
         for(auto e : edges){
             g[e[0]].push_back(e[1]) ; 
             g[e[1]].push_back(e[0]) ; 
         }
         return dfs(src , src , cap , n) ; 
    }
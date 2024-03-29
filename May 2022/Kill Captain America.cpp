int captainAmerica(int N, int M, vector<vector<int>> &V){
       int n = N;
       int d[N] = {};
       vector<int> adj[N];
       for(int i=0;i<M;i++){
           int u = V[i][0]-1, v = V[i][1]-1;
           adj[u].push_back(v);
       }
       queue<int> Q;
       for (auto a : adj) {
           for (auto i : a) {
               d[i]++;
           }
       }
       int terminal = -1;
       bool exists = true;
       for (int i = 0; i < N; i++) {
           if (adj[i].empty()) {
               if(terminal == -1) terminal = i;
               else if(terminal != i) exists = false;
           }
           if (!d[i]) Q.push(i);
       }
       if (exists && terminal != -1) return 1;
       while(!Q.empty()) {
           n--;
           int v = Q.front();
           Q.pop();
           for (auto i : adj[v]) {
               d[i]--;
               if (!d[i]) Q.push(i);
           }
       }
       return n;
    } 
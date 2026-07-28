int shortestPath(int V, int src, int dest, vector<vector<int>> &edges) {
        // code here
         vector<vector<pair<int,int>>>adj(V);
        for(auto i: edges){
            adj[i[0]].push_back({i[1] , i[2]});
            adj[i[1]].push_back({i[0] , i[2]});
        }
        vector<int>dist(V,INT_MAX);
        dist[src] = 0;
        // vector<vector<int>>tot(V*2);
        vector<int>a , b , c;
        a.push_back(src);
        int i = -1;
        while(a.size() >0 || b.size() > 0){
            i++;
            for(int &ind : a){
                if(dist[ind] < i)continue;
                for(auto &[x , y]: adj[ind]){
                    if(y + dist[ind] < dist[x]){
                        dist[x] = y + dist[ind];
                        if(y == 2)c.push_back(x);
                        else b.push_back(x);
                    }
                }
            }
            swap(a , b);
            swap(b , c);
            c.clear();
        }
        if(dist[dest] == INT_MAX)return -1;
        return dist[dest];
    }
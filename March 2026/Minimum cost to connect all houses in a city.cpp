class DSU{
    private: 
        vector<int> parent;
        vector<int> size;
    public:
        DSU(int n){
            parent.resize(n);
            size.resize(n, 1);
            for(int i=0; i<n; i++){
                parent[i] = i;
            }
        }
        int findParent(int u){
            if(u==parent[u]){
                return u;
            }
            return parent[u] = findParent(parent[u]);
        }
        void unionBySize(int u, int v){
            int parentU = parent[u], parentV = parent[v];
            if(parentU==parentV){
                return;
            }
            int sizeU = size[parentU], sizeV = parent[parentV];
            if(sizeU>sizeV){
                parent[parentV] = parentU;
                size[parentU] += size[parentV];
            }else{
                parent[parentU] = parentV;
                size[parentV] += size[parentU];
            }
        }
};
class Solution {
  public:
    int minCost(vector<vector<int>>& houses) {
        // code here
        int n = houses.size();
        DSU ds(n);
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, 
        greater<pair<int, pair<int, int>>> >pq;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int dist = abs(houses[i][0]-houses[j][0])+abs(houses[i][1]-houses[j][1]);
                pq.push({dist, {i, j}});
            }
        }
        int res = 0;
        while(!pq.empty()){
            auto p = pq.top();
            pq.pop();
            int u = p.second.first, v = p.second.second;
            if(ds.findParent(u)!=ds.findParent(v)){
                res+= p.first;
                ds.unionBySize(u, v);
            }
        }
        return res;
        
    }
};
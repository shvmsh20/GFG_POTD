void dfs(int i, vector<int> g[], vector<bool> &vis, vector<vector<int>> &v, int start){
        vis[i]=true;
        v[start][i]=1;
        for(auto child: g[i]){
            if (vis[child]) continue;
            dfs(child, g, vis, v, start);
        }
    }
public:
    #define append push_back
    vector<vector<int>> transitiveClosure(int n, vector<vector<int>> gr)
    {
        vector<vector<int>> v(n, vector<int>(n, 0));
        vector<int> g[n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if (gr[i][j]) g[i].append(j);
            }
        }
        for(int i=0; i<n; i++){
            vector<bool> vis(n, false);
            dfs(i, g, vis, v, i);
        }
        return v;
    }
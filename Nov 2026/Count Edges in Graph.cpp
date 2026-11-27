int countEdges(vector<vector<int>> &adj) {
        // code here
        int n = adj.size();
                int ans = 0;
                for(int i=0;i<n;i++)ans+=adj[i].size();
                return ans/2;
    }
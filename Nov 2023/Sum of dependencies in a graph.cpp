int sumOfDependencies(vector<int> adj[], int V) {
        // code here
          int count=0;
        for(int i=0;i<V;i++){
            count+=adj[i].size();
        }
        return count;
    }
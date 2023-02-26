void dfs(int src, vector<int>& visited, vector<vector<int>>& graph, 
                int &numberOfNodesInComponent, int size, bool& ans){
        
        visited[src]=1;
        numberOfNodesInComponent++;
        
        for(auto it:graph[src]){
            if(graph[it].size()!=size)
                ans=false;  
            if(visited[it]==0)
                dfs(it,visited,graph,numberOfNodesInComponent,size,ans);
        }
    }
    
    bool isGoodComponent(int src, vector<int>& visited, vector<vector<int>>& graph){
        int numberOfNodesInComponent=0;
        int size=graph[src].size();
        bool ans=true;
        dfs(src,visited,graph,numberOfNodesInComponent,size,ans);
        
        if(size==numberOfNodesInComponent-1 and ans==true)  return true;
        return false; 
    }
    
    public:
    int findNumberOfGoodComponent(int V, vector<vector<int>>& graph) {
        // code here
        
        int ans=0;
        vector<int> visited(V+1,0);
        for(int i=1;i<=V;i++){
            if(visited[i]==0){
                if(isGoodComponent(i,visited,graph))
                    ans++;
            }
        }
        
        return ans;
    }
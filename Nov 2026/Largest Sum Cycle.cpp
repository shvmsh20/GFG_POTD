int DFS(int u,vector<bool> &path,vector<bool> &visited,vector<int>& edge,int &ans,int &temp){
        
        path[u] = 1;
        visited[u]=1;
        int v = edge[u];
        
        if(v==-1){ 
            path[u]=0;
            return 0;
        }
        else if(path[v]){
            path[v]=0;
            temp+=u;
            return 1;
        }
        else if(visited[v]){
            path[u]=0;
            return 0;
            
        }
        else{
            
           int num =  DFS(v,path,visited,edge,ans,temp);
           
           if(num){
               temp+=u;
               if(!path[u]){ans = max(ans,temp);return 0;}
               return 1;
           }
           else {
               path[u]=0;
               return 0;
           }    
        }
    }
    
    int largestSumCycle(vector<int>& edge) {
        // code here
        int n = edge.size();
        vector<bool>path(n,0);
        vector<bool>visited(n,0);
        int ans = -1;
        int temp = 0;
        
        for(int i=0;i<n;i++){
            if(!visited[i]){
                temp = 0;
                DFS(i,path,visited,edge,ans,temp);
            }
        }
        
        return ans;
    }
void make_set(int v,vector<int>&parent,vector<int>&size){
        parent[v]=v;
        size[v]=1;
    }
    int find_set(int v,vector<int>&parent,vector<int>&size){
        if(v==parent[v]) return v;
        return parent[v]=find_set(parent[v],parent,size);
    }
    void union_set(int a,int b,vector<int>&parent,vector<int>&size){
        a=find_set(a,parent,size);
        b=find_set(b,parent,size);
        
        if(a!=b){
            if(size[a]<size[b]){
                swap(a,b);
            }
            
            parent[b]=a;
            size[a]+size[b];
        }
    }
    int detectCycle(int V, vector<int>adj[])
    {
        // Code here
        vector<int>parent(V);
        vector<int>size(V);
        
        for(int i=0;i<V;i++){
            make_set(i,parent,size);
        }
        
        for(int i=0;i<V;i++){
            for(auto j:adj[i]){
                int x=find_set(i,parent,size);
                int y=find_set(j,parent,size);
                
                if(x==y && i<j) return 1;
                else union_set(i,j,parent,size);
            }
        }
        return 0;
        
    }
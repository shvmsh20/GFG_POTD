int biGraph(int arr[], int n, int e) {
        // code here
       if(n==1)return 1;
       if(n==2&&e==1)return 1;
       vector<int>g[n];
       for(int i=0;i<2*e;i+=2){
           int u=arr[i];
           int v=arr[i+1];
           g[u].push_back(v);
           g[v].push_back(u);
       }
       for(auto i:g){
        if(i.size()<2){
            return 0;
        }   
       }
       return 1;
    }
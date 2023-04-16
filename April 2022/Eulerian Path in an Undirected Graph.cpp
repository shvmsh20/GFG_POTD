int eulerPath(int N, vector<vector<int>> graph){
        int even=0, odd=0;
        int n = graph.size();
        for(int i=0; i<n; i++){
            int count=0;
            for(int j=0; j<n; j++){
                if(graph[i][j]==1){
                    count++;
                }
            }
            if(count%2==0){
                even++;
            }else{
                odd++;
            }
        }
        if(even==n){
            return 1;
        }else if(odd==2){
            return 1;
        }else{
            return 0;
        }
    }
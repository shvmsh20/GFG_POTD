int isEulerCircuit(int V, vector<int>adj[]){
	    // Code here
	     int t =0;
        for(int i=0;i<V;i++){
            int z = adj[i].size();
            if(z%2!=0){
                t++;
            }
        }
        if(t==0){
            return 2;
        }
        if(t==2){
            return 1;
        }
        return 0;
	}
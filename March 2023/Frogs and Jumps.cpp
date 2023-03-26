int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        unordered_map<int, int> mp;
        for(int i=0; i<N; i++){
            int a = frogs[i];
            int b = a;
            if(!mp[a]){
                while(a <= leaves){
                    mp[a]++;
                    a+=b;
                }
            }
            
        }
        
        int count=0;
        for(int i=1;i<=leaves;i++){
            if(mp[i]==0) count++;
        }
        return count++;
    }
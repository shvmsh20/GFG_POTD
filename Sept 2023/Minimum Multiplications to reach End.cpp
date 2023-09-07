int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        int mod = 1e5;
        vector<int> states(mod, -1);
        queue<int> q;
        q.push(start);
        states[start] = 0;
        int steps= 0;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            if(x==end){
                return states[x];
            }
            for(int j=0; j<arr.size(); j++){
                int mul = (arr[j]*x)%mod;
                if(states[mul]==-1){
                    states[mul] = 1+states[x];
                    q.push(mul);
                }
            }
            
        }
        return -1;
    }
int minSteps(vector<int>& arr, int start, int end) {
        // code here
        if(start==end){
            return 0;
        }
        int n = arr.size();
        queue<int> q;
        q.push(start);
        unordered_set<int> vis;
        vis.insert(start);
        int steps = 1;
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                int x = q.front();
                q.pop();
                for(int i=0; i<n; i++){
                    int t = (x*arr[i])%1000;
                    if(t==end){
                        return steps;
                    }
                    if(vis.find(t)==vis.end()){
                        vis.insert(t);
                        q.push(t);
                    }
                }
            }
            steps++;
        }
        return -1;
    }
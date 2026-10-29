int minComputation(vector<int> &files) {
        // code here
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int x: files){
            pq.push(x);
        }
        int res = 0;
        while(pq.size()>=2){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            pq.push(x+y);
            res+= (x+y);
        }
        return res;
    }
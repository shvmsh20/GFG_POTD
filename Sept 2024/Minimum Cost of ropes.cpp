long long minCost(vector<long long>& arr) {
        // Your code here
        if(arr.size()==1){
            return 0;
        }
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for(int x: arr){
            pq.push(x);
        }
        long long res = 0;
        while(pq.size()!=1){
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            pq.pop();
            res+= (x+y);
            pq.push({x+y});
        }
        return res;
    }
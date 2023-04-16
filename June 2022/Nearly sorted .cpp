vector <int> nearlySorted(int arr[], int num, int k){
        // Your code here
        priority_queue<int, vector<int>, greater<int>> pq;
        int i;
        vector<int> res;
        for(i=0; i<num && i<=k; i++){
            pq.push(arr[i]);
        }
        for(; i<num; i++){
            res.push_back(pq.top());
            pq.pop();
            pq.push(arr[i]);
        }
        while(!pq.empty()){
            res.push_back(pq.top());
            pq.pop();
        }
        return res;
        
    }
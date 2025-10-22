void nearlySorted(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0; i<=k && i<n; i++){
            pq.push(arr[i]);
        }
        for(int i=0; i<n; i++){
            int front = pq.top();
            pq.pop();
            arr[i] = front;
            if(i+k+1<n){
                pq.push(arr[i+k+1]);
            }
        }
    }
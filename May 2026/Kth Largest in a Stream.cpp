vector<int> kthLargest(vector<int>& arr, int k) {
        // code here
        vector<int> res;
        int n = arr.size();
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0; i<n; i++){
            if(pq.size()<k){
                pq.push(arr[i]);
            }else {
                if(arr[i]>pq.top()){
                    pq.pop();
                    pq.push(arr[i]);
                }
            }
            if(pq.size()!=k){
                res.push_back(-1);
            }else{
                res.push_back(pq.top());
            }
        }
        return res;
        
    }
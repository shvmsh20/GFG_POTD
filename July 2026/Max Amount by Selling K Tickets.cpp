int mod = 1e9+7;
    int maxAmount(vector<int>& arr, int k) {
        // code here
        priority_queue<int> pq(arr.begin(), arr.end());
        int res = 0;
        while(k-- && pq.size()){
            int top = pq.top();
            pq.pop();
            res = (res+top)%mod;
            top--;
            if(top){
                pq.push(top);
            }
        }
        return res;
        
    }
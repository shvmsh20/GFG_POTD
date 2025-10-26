int minCost(vector<int>& arr) {
        // code here
        priority_queue<int, vector<int>, greater<int>> mnHeap;
        int n = arr.size();
        for (int i=0; i<n; i++) mnHeap.push(arr[i]);
        
        int ans = 0;
        while (mnHeap.size()>1) {
            int t1 = mnHeap.top();
            mnHeap.pop();
            int t2 = mnHeap.top();
            mnHeap.pop();
            
            ans += (t1+t2);
            mnHeap.push(t1+t2);
        }
        return ans;
    }
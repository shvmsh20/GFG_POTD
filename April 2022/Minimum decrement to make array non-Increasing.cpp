int minOperations(int *a,int n)
    {
        priority_queue<int, vector<int>, greater<int> > pq;
        int res=0;
        for(int i=0; i<n; i++){
            if(!pq.empty() && a[i]>pq.top()){
                res+= a[i]-pq.top();
                pq.pop();
                pq.push(a[i]);
            }
            pq.push(a[i]);
        }
        return res;
    }
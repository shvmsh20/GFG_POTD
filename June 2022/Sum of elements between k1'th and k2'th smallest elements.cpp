long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        priority_queue<long long, vector<long long>, greater<long long> > pq;
        for(long long i=0; i<N; i++){
            pq.push(A[i]);
        }
        int k=1;
        while(k<K1){
            k++;
            pq.pop();
        }
        k++;
        pq.pop();
        long long res=0;
        while(k<K2){
            res+= pq.top();
            pq.pop();
            k++;
        }
        return res;
    }
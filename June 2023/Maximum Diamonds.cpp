long long maxDiamonds(int A[], int N, int K) {
        // code here
        priority_queue<long long> pq(A, A+N);
        long long res = 0;
        while(!pq.empty() && K--){
            res+= pq.top();
            int tmp = pq.top()/2;
            pq.pop();
            pq.push(tmp);
        }
        return res;
    }
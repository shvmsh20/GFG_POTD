int maxGroupSize(int arr[], int N, int k) {
        // code here
        vector<int> dp(k, 0);
        for(int i = 0; i < N; i++){
            dp[arr[i] % k]++;
        }
        priority_queue<pair<int, int>> pq;
        int curr = dp[0] > 0 ? 1 : 0;
        curr += (k % 2 == 0 && dp[k/2] > 0) ? 1 : 0;
        if(k % 2 == 0){
            dp[k/2] = 0;
        }
        for(int i = 1; i < k; i++){
            if(k % 2 == 0 && 2*i == k && dp[i] > 0){
                curr++;
                continue;
            }
            pq.push({dp[i], i});
        }
        while(pq.empty() == false){
            if(dp[pq.top().second] != -1){
                curr += pq.top().first;
                dp[k - pq.top().second] = -1;
            }
            pq.pop();
        }
        return curr;
    
    }
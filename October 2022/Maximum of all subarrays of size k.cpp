vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> res;
        deque<int> dq;
        for(int i=0; i<k; i++){
            while(!dq.empty() && arr[dq.back()]<arr[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        res.push_back(arr[dq.front()]);
        for(int i=k; i<n; i++){
            if(dq.front()==i-k){
                dq.pop_front();
            }
            while(!dq.empty() && arr[dq.back()]<arr[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            res.push_back(arr[dq.front()]);
        }
        return res;
    }
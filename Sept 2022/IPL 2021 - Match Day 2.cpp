vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        deque<int> dq;
        for(int i=0; i<n && i<k; i++){
            while(!dq.empty() && arr[i]>dq.back()){
                dq.pop_back();
            }
            dq.push_back(arr[i]);
        }
        vector<int> res;
        res.push_back(dq.front());
        for(int i=k; i<n; i++){
            while(!dq.empty() && arr[i]>dq.back()){
                dq.pop_back();
            }
            dq.push_back(arr[i]);
            if(arr[i-k]==dq.front()){
                dq.pop_front();
            }
            res.push_back(dq.front());
        }
        return res;
    }
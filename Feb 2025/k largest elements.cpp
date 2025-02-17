vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        vector<int> res;
        sort(arr.begin(), arr.end(), greater<int>());
        for(int i=0; i<k; i++){
            res.push_back(arr[i]);
        }
        return res;
    }
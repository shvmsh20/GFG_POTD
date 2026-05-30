void replaceElements(vector<int>& arr) {
        // code here
        vector<int> res;
        int n = arr.size();
        for(int i=0; i<n; i++){
            int prev = i-1>=0?arr[i-1]:arr[i];
            int next = i+1<n?arr[i+1]:arr[i];
            res.push_back(prev^next);
        }
        for(int i=0; i<n; i++){
            arr[i] = res[i];
        }
    }
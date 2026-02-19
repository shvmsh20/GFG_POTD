vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        vector<int> res;
        unordered_set<int> s;
        for(int i=0; i<arr.size(); i++){
            s.insert(arr[i]);
        }
        for(int i=low; i<=high; i++){
            if(s.find(i)==s.end()){
                res.push_back(i);
            }
        }
        return res;
    }
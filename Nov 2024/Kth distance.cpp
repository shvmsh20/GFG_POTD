bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        // your code
        unordered_set<int> s;
        for(int i=0; i<k; i++){
            if(s.find(arr[i])!=s.end()){
                return true;
            }
            s.insert(arr[i]);
        }
        for(int i=k; i<arr.size(); i++){
            if(s.find(arr[i])!=s.end()){
                return true;
            }
            s.erase(arr[i-k]);
            s.insert(arr[i]);
        }
        return false;
    }
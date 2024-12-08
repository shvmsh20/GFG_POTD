vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        sort(arr.begin(), arr.end());
        vector<int> curr = arr[0];
        vector<vector<int>> res;
        for(int i=1; i<arr.size(); i++){
            int st = arr[i][0];
            int end = arr[i][1];
            if(st<=curr[1]){
                curr[1] = max(curr[1], end);
            }else{
                res.push_back(curr);
                curr = arr[i];
            }
        }
        res.push_back(curr);
        return res;
    }
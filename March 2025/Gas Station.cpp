int startStation(vector<int> &gas, vector<int> &cost) {
        // Your code here
        int start = 0;
        int n = gas.size();
        int curr = 0;
        int prev = 0;
        for(int i = 0; i < n; i++){
            curr += gas[i] - cost[i];
            if(curr < 0){
                start = i + 1;
                prev += curr;
                curr = 0;
            }
        }
        return curr + prev >= 0 ? start : -1;
    }
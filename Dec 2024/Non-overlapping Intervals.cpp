int minRemoval(vector<vector<int>> &intervals) {
        // code here
        sort(intervals.begin(), intervals.end());
        int end = intervals[0][1], res = 0, n = intervals.size();
        for(int i=1; i<n; i++){
            if(intervals[i][0]<end){
                end = min(end, intervals[i][1]);
                res++;
            }else{
                end = intervals[i][1];
            }
        }
        return res;
    }
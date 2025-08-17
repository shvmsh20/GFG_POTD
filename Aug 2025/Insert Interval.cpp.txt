// User function Template for C++


class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
        // code here
        
        int n = intervals.size();
        vector<vector<int>> res;
        int start = newInterval[0], index = 0;
        for(; index<n; index++){
            if(intervals[index][1]<start){
                res.push_back(intervals[index]);
                continue;
            }else{
                break;
            
            }
        }
        if(index==n){
            res.push_back(newInterval);
            return res;
        }
        for(; index<n; index++){
            if((newInterval[0]>=intervals[index][0] && newInterval[0]<=intervals[index][1]) ||
            (newInterval[1]>=intervals[index][0] && newInterval[1]<=intervals[index][1]) ||
            (newInterval[1]>=intervals[index][1] && newInterval[0]<=intervals[index][0])){
                newInterval[0] = min(newInterval[0], intervals[index][0]);
                newInterval[1] = max(newInterval[1], intervals[index][1]);
            }else{
                res.push_back(newInterval);
                break;
            }
        }
        if(index==n){
            res.push_back(newInterval);
            return res;
        }
        for(; index<n; index++){
            res.push_back(intervals[index]);
        }
        return res;
    }
};
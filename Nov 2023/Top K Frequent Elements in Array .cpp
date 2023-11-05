class cmp {
public:
    bool operator()(pair<int, int> below, pair<int, int> above){
       if(below.second!=above.second){
           return above.second>below.second;
       }else{
           return above.first>below.first;
       }
   }
};
class Solution {
  public:
    
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        for(auto x: mp){
            pq.push(x);
        }
        vector<int> res;
        for(int i=0; i<k; i++){
            pair<int, int> p = pq.top();
            pq.pop();
            res.push_back(p.first);
        }
        return res;
    }
};
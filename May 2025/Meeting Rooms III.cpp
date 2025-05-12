struct cmp{
    bool operator()(pair<int, int> &p1, pair<int, int> &p2){
        if(p1.second!=p2.second) return p1.second>p2.second;
        return p1.first>p2.first;
    }
};
class Solution {
  public:
    int mostBooked(int n, vector<vector<int>> &meetings) {
        // code here
        int m = meetings.size();
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>, vector<pair<int,int>>, cmp> pq;
        priority_queue<int, vector<int>, greater<int>> unused;
        for(int i=0; i<n; i++){
            unused.push(i);
        }
        sort(meetings.begin(), meetings.end());
        for(int i=0; i<m; i++){
            int st = meetings[i][0], end = meetings[i][1];
            while(!pq.empty() && pq.top().second<=st){
                unused.push(pq.top().first);
                pq.pop();
            }
            if(!unused.empty()){
                int p = unused.top();
                unused.pop();
                mp[p]++;
                pq.push({p, end});
            }else{
                pair<int, int> p = pq.top();
                pq.pop();
                mp[p.first]++;
                pq.push({p.first, p.second+(end-st)});
            }
            
            
        }
        int res = 0;
        int mx = INT_MIN;
        for(auto it: mp){
            // cout << it.first << " " << it.second<<endl;
            if(it.second>mx){
                mx = it.second;
                res = it.first;
            }
            if(it.second==mx){
                res = min(res, it.first);
            }
        }
        return res;
    }
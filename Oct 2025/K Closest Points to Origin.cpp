class Solution {
  public:
    struct cmp{
        bool operator()(pair<int, int> &p1, pair<int, int> &p2){
            return p1.first<p2.first;
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Your code here
        vector<vector<int>> res;
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        for(int i=0; i<points.size(); i++){
            int x = points[i][0], y = points[i][1];
            int dist = (x*x) + (y*y);
            if(pq.size()<k){
                pq.push({dist, i});
            }else if(pq.top().first>dist){
                pq.pop();
                pq.push({dist, i});
            }
            // cout << pq.top().first << endl;
        }
        while(!pq.empty()){
            res.push_back(points[pq.top().second]);
            pq.pop();
        }
        return res;
    }
};
class Solution {
  public:
    struct cmp{
        bool operator()(pair<int, int> &p1, pair<int, int> &p2){
            return p1.first<p2.first;
        }
    };
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        int n = arr.size();
        for(int i=0; i<k; i++){
            pq.push({arr[i], i});
        }
        vector<int> res;
        res.push_back(pq.top().first);
        for(int i=k; i<n; i++){
            pq.push({arr[i], i});
            while(pq.top().second<=i-k){
                pq.pop();
            }
            res.push_back(pq.top().first);
        }
        return res;
    }
};

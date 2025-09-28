struct cmp1{
        bool operator()(pair<int, int> &p1, pair<int, int> &p2){
            if(p1.first!=p2.first) return p1.first>p2.first;
            return p1.second>p2.second;
        }
    };
    struct cmp2{
        bool operator()(pair<int, int> &p1, pair<int, int> &p2){
            if(p1.first!=p2.first) return p1.first<p2.first;
            return p1.second>p2.second;
        }
    };
    vector<int> longestSubarray(vector<int>& arr, int x) {
        // code here
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp1> mnPq;
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp2> mxPq;
        int n = arr.size();
        int stIndex = -1, cnt = 0;
        int left = 0, right = 0;
        while(right<n){
            mnPq.push({arr[right], right});
            mxPq.push({arr[right], right});
            while(right>left && mxPq.top().first-mnPq.top().first>x){
                while(left>=mxPq.top().second){
                    mxPq.pop();
                }
                while(left>=mnPq.top().second){
                    mnPq.pop();
                }
                left++;
            }
            if(right-left+1>cnt){
                // cout << left << " " << right << endl;
                stIndex = left;
                cnt = right-left+1;
            }
            right++;
        }
        vector<int> res;
        for(int i=0; i<cnt; i++){
            res.push_back(arr[stIndex+i]);
        }
        return res;
    }
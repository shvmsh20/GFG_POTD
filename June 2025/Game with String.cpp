struct cmp{
        bool operator()(pair<char, int> &p1, pair<char, int> &p2){
            return p1.second<p2.second;
        }
    };
    int minValue(string s, int k){
        // code here
        unordered_map<char, int> mp;
        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
        }
        priority_queue<pair<char, int>, vector<pair<char, int>>, cmp> pq;
        for(auto x: mp){
            pq.push(x);
        }
        while(k-- && !pq.empty()){
            pair<char, int> p = pq.top();
            pq.pop();
            mp[p.first]--;
            pq.push({p.first, p.second-1});
        }
        int res = 0;
        for(auto x: mp){
            res+= (x.second * x.second);
        }
        return res;
    }
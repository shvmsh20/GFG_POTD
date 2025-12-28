using p = pair<int,pair<int,int>>;
    int minTime(vector<int>& ranks, int n) {
        priority_queue<p,vector<p>,greater<p>> pq;
        int m = ranks.size(); // number of chefs
        for(int i=0;i<m;i++){
            pq.push({ranks[i],{2*ranks[i],i}});
        }
        int ans = 0;
        while(n--){
            p temp = pq.top();
            pq.pop();
            ans=max(ans,temp.first);
            pq.push({temp.first+temp.second.first,{temp.second.first+ranks[temp.second.second],temp.second.second}});
        }
        return ans;
    }
int maximum_profit(int n, vector<vector<int>> &intervals) {
        // Write your code here.
        vector<vector<int>>d;
       for(int i=0;i<intervals.size();i++)
       {
           d.push_back({intervals[i][1],intervals[i][0],intervals[i][2]});
       }
       sort(d.begin(),d.end());
       map<int,int>m={{0,0}};
       for(auto it:d)
       {
           int cur=prev(m.upper_bound(it[1]))->second+it[2];
           if(cur>m.rbegin()->second)
           {
               m[it[0]]=cur;
           }
       }
       return m.rbegin()->second;
    }
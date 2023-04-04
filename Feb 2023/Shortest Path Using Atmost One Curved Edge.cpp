int shortestPath(int n, int m, int a, int b, vector<vector<int>> &edges) {
        // code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

        vector<pair<int,int>>v1(n+1,{INT_MAX,INT_MAX});

        v1[a]={0,0};

        vector<pair<int,pair<int,int>>> adj1[n+1];

        

        for(int i=0;i<m;i++)

        {

            adj1[edges[i][0]].push_back({edges[i][1], {edges[i][2], edges[i][3]}}); 

            adj1[edges[i][1]].push_back({edges[i][0], {edges[i][2], edges[i][3]}}); 

        } 

        pq.push({0, a});

        

        while(!pq.empty())

        {

            auto temp = pq.top();

            pq.pop();

             for(auto it : adj1[temp.second])

             {

                 if(it.first == temp.second) continue;

                 int t = temp.first + it.second.first;

                 int t1 = min( v1[temp.second].second + it.second.first, v1[temp.second].first + it.second.second);

                 if(v1[it.first].first > t || v1[it.first].second > t1)

                 {

                    v1[it.first].first = min(v1[it.first].first, t);

                    v1[it.first].second = min(v1[it.first].second, t1);

                    pq.push({t, it.first});

                 }

             }

             

        }

        if(v1[b].first == INT_MAX) return -1;

        return min(v1[b].first,v1[b].second);
    }
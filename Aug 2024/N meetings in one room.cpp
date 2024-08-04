int maxMeetings(int n, int start[], int end[]) {
        // Your code herev
        vector<pair<int, int>> res;
        for(int i=0; i<n; i++){
            res.push_back({end[i], start[i]});
        }
        sort(res.begin(), res.end());
        int lastEnd = 0;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(res[i].second>lastEnd){
                ans++;
                lastEnd = res[i].first;
            }
        }
        return ans;
    }
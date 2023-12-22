vector<int> maxMeetings(int n,vector<int> &s,vector<int> &f){
        vector<vector<int>> res(n);
        for(int i=0; i<n; i++){
            res[i] = {f[i], i+1, s[i]};
        }
        sort(res.begin(), res.end());
        vector<int> ans;
        int st = -1, ed = -1;
        for(int i=0; i<n; i++){
            int start = res[i][2];
            int end = res[i][0];
            int meetNo = res[i][1];
            if(start>ed){
                ans.push_back(meetNo);
                st = start;
                ed = end;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
static bool cmp(pair<int, int> &p1, pair<int, int> &p2){
        if(p1.second!=p2.second){
            return p1.second<p2.second;
        }
        return p1.first<p2.first;
    }
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        vector<pair<int, int>> arr;
        for(int i=0; i<start.size(); i++){
            arr.push_back({start[i], finish[i]});
        }
        sort(arr.begin(), arr.end(), cmp);
        int cnt = 0;
        int prevEnd = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i].first>prevEnd){
                cnt++;
                prevEnd = arr[i].second;
            }
        }
        return cnt;
    }
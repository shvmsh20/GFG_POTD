int mostBalloons(int n, pair<int, int> arr[]) {
        // Code here
        int ans=-1;
        for(int i=0; i<n; i++){
            unordered_map<double, int> mp; 
            int x1 = arr[i].first, y1 = arr[i].second;
            int count=0;
            for(int j=0; j<n; j++){
                int x2 = arr[j].first, y2 = arr[j].second;
                if(x1==x2 && y1==y2){
                    count++;
                    continue;
                } 
                double theta = 1.0*(y2-y1)/(x2-x1);
                mp[theta]++;
            }
            for(auto x: mp){
                ans = max(ans, x.second+count);
            }
        }
        return ans;
    }
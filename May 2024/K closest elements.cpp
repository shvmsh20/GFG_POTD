 vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        vector<pair<int,int>>ans;
        
        for(int i=0;i<n;i++){
            ans.push_back({abs(arr[i]-x),arr[i]});
        }
        
         auto cmp = [](pair<int, int>& a, pair<int, int>& b) {
            if (a.first == b.first) {
                return a.second > b.second;
            }
            return a.first < b.first; 
        };
        
        sort(ans.begin(),ans.end(),cmp);
        
         vector<int>res;
        for(int i=0;i<k;i++){
            if(ans[i].second==x)continue;
            res.push_back(ans[i].second);
        }
        if(res.size()<k)res.push_back(ans[k].second);
        return res;
    }
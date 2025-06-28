vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // code here
        vector<pair<int,int>>v;
        for(int i = 0 ; i<a.size(); i++){
            v.push_back({a[i],i});
        }
        sort(v.begin(),v.end());
        sort(b.begin(),b.end());
        vector<int>result(a.size(),0);
        int n = a.size();
        int m = b.size();
        int j = 0;
        for(int i = 0 ; i<n ; i++){
            while(j<m && b[j]<=v[i].first){
                j++;
            }
            result[v[i].second]=j;
        }
        return result;
    }
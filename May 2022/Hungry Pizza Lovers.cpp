bool static cmp(pair<int,  int> a, pair<int, int> b){
    if(a.first!=b.first){
        return a.first< b.first;
    }
    return a.second< b.second;
}
vector<int> permute(vector<vector<int>> &arr, int n)
{
    
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        v.push_back({arr[i][0]+arr[i][1], i+1});
    }
    sort(v.begin(), v.end(), cmp);
    vector<int> ans(n);
    for(int i=0; i<n;i++){
        ans[i] = v[i].second;
    }
    return ans;
}
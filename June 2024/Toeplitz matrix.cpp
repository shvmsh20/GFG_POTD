bool isToeplitz(vector<vector<int>>& v) {
    // code here
    int i=0;
    int n=v.size(), m = v[0].size();
    unordered_map<int, int> mp;
    while(i<n) {
        int j=0;
        while(j<m){
            if (mp.find(j-i)!=mp.end()) {
                if (mp[j-i]!=v[i][j]) return false;
            }
            else mp[j-i]=v[i][j];
            j++;
        }
        i++;
    }
    return true;
}
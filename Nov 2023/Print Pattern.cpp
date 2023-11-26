void solve(vector<int> &ans, int n) {
        if(n <= 0) {
            ans.push_back(n);
            return;
        }
        
        ans.push_back(n);
        solve(ans, n-5);
        ans.push_back(n);
    }
    
    vector<int> pattern(int n){
        vector<int> ans;
        solve(ans, n);
        return ans;
    }
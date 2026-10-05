void solve(int main, int i, unordered_map<int, int> &ump, int val, vector<vector<int>> &ans) {
            if(!ump[i]){
                ans.push_back({main, i, val});
                return;
            }
            solve(main, ump[i], ump, val+1, ans);
            ans.push_back({main, i, val});
        }
        vector<vector<int>> socialNetwork(vector<int>& arr) {
            vector<vector<int>> ans;
            // element, its friend
            unordered_map<int, int> ump;
            ump[1] = 0;

            for(int i=0; i<arr.size(); i++)
                ump[i+2] = arr[i];

            int n = arr.size();
            for(int i=2; i<= n+1; i++) 
            // cout<<i<<'\t'<<ump[i]<<'\n';
                solve(i, ump[i], ump, 1, ans);
            return ans;
        }
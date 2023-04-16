void solve(vector<int> arr, int index, int n, vector<int> &temp, vector<vector<int>> &res){
        res.push_back(temp);
        for(int i=index; i<n; i++){
            if(i!=index && arr[i]==arr[i-1]) continue;
            temp.push_back(arr[i]);
            solve(arr, i+1, n, temp, res);
            temp.pop_back();
        }
    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        
        vector<vector<int>> res;
        vector<int> temp;
        int i=0;
        sort(arr.begin(), arr.end());
        solve(arr, i, n, temp, res);
        return res;
    }
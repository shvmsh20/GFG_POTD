void solve(map<vector<int>,int>&m,int i,int n, vector<int>arr){
        if(i>=n){
            m[arr]++;
            return;
        }
        for(int j=i;j<n;j++){
            swap(arr[i],arr[j]);
            solve(m,i+1,n,arr);
            swap(arr[i],arr[j]);
        }
    }
  
    vector<vector<int>> uniquePerms(vector<int>& arr) {
        // code here
        map<vector<int>,int>m;
        
        solve(m,0,arr.size(),arr);
        
        vector<vector<int>>ans;
        for(auto i:m){
            ans.push_back(i.first);
        }
        return ans;
    }
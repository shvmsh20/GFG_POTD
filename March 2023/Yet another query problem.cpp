vector<int> solveQueries(int n, int num, vector<int> &arr, vector<vector<int>> &que) {
        // code here
        unordered_map<int,int> mp;
        vector<int> val(n);
        
        for(int i=n-1; i>=0; i--){
            mp[arr[i]]++;
            val[i] = mp[arr[i]];
        }
        
        vector<int> res;
        
        for(auto q : que){
            int l = q[0];
            int r = q[1];
            int freq = q[2];
            int cnt = 0;
            
            for(int i=l; i<=r; i++){
                if(val[i] == freq){
                    cnt++;
                }
            }
            
            res.push_back(cnt);
        }
        
        return res;
    }
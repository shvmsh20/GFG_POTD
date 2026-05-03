vector<int> sortBySetBitCount(vector<int>& arr) {
        // code here
        vector<vector<int>>bits(33) ;
        for(int i : arr) bits[__builtin_popcount(i)].push_back(i) ; 
        
        vector<int>ans ;
        for(int b = 32 ; b >= 0 ; b --) for(int i : bits[b]) ans.push_back(i) ;
        
        return ans ;
    }
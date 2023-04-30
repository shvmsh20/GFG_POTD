int powerfullInteger(int n,vector<vector<int>> &i,int k){
        // Code here
         map <int , int> mp ;
        for(int j = 0 ; j < n ; j++){
            mp[i[j][0]]++ ;
            mp[i[j][1]+1]-- ;
        }
        int cnt = 0 , ans = -1 ;
        for(auto &x : mp){
            if(cnt >= k){
                ans = max(ans , x.first - 1) ;
            }
            cnt += x.second ;
        }
        return ans ;
    }
unordered_map<int, int> mp;
    int findWinner(int n, int x, int y) {
        // code here
        if(n==1 || n==x || n==y){
            return 1;
        }
        if(mp.find(n)!=mp.end()){
            return mp[n];
        }
        return mp[n] = (n>=1 && !findWinner(n-1, x, y)) ||  (n>=x && !findWinner(n-x, x, y)) || (n>=y && !findWinner(n-y, x, y));
    }
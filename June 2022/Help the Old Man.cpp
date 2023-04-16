int x;
    int y;
    void solve(int n, int a, int b, int c, int &k){
        if(n==0){
            return;
        }
        solve(n-1, a, c, b, k);
        k--;
        if(k==0){
            x = a;
            y = c;
            return;
        }
        solve(n-1, b, a, c, k);
    }
    vector<int> shiftPile(int N, int n){
        // code here
        solve(N, 1, 2, 3, n);
        vector<int> v(2);
        v[0]=x;
        v[1] = y;
        return v;
        
    }
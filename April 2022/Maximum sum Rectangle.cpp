int kadanes(vector<int> &v){
       int max_so_far = v[0];
       int curr_so_far = v[0];
       for(int i = 1; i < v.size(); i++){
           curr_so_far = max(v[i],curr_so_far+v[i]);
           max_so_far = max(max_so_far,curr_so_far);
       }
       return (max_so_far);
   }
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        // code here
        int mx = INT_MIN;
        for(int i = 0; i < R; i++){
           vector<int> v(C,0);
           for(int i1 = i; i1 < R; i1++){
               for(int j = 0; j < C; j++){
                   v[j] += M[i1][j];
               }
               mx = max(mx,kadanes(v));
           }
       }
       return (mx);
    }
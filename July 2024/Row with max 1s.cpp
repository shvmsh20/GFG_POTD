int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
        int n = arr.size(), m = arr[0].size();
        int x = 0, y = m-1;
        int res = -1;
        for(int i=0; i<n; i++){
            while(y>=0 && arr[x][y]==1){
                y--;
                res = i;
            }
            x++;
            if(y==-1){
                return i;
            }
        }
        return res;
    }
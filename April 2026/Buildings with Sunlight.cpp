int visibleBuildings(vector<int>& arr) {
        // code here
        int mx = INT_MIN;
        int res = 0;
        for(int x: arr){
            if(x>=mx){
                res++;
                mx = x;
            }
        }
        return res;
    }
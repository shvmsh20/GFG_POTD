int countBuildings(vector<int> &height) {
        // code here
        int mx = INT_MIN, res = 0;
        for(int x: height){
            if(x>mx){
                res++;
                mx = x;
            }
        }
        return res;
    }
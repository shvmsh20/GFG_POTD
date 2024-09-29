int totalCount(int k, vector<int>& arr) {
        // code here
        int res = 0;
        for(int x: arr){
            res+= x/k;
            if(x%k){
                res++;
            }
        }
        return res;
    }
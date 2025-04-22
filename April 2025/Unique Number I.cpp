int findUnique(vector<int> &arr) {
        // code here
        int res = 0;
        for(int x: arr){
            res = res ^ x;
        }
        return res;
    }
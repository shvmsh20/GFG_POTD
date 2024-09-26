int maxStep(vector<int>& arr) {
        // Your code here
        int res = 0, curr = 0, n = arr.size();
        for(int i=1; i<n; i++){
            if(arr[i]>arr[i-1]){
                curr++;
                res = max(res, curr);
            }else{
                curr = 0;
            }
        }
        return res;
    }
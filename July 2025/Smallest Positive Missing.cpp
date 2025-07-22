int missingNumber(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        int res = 0;
        int n = arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]<0){
                continue;
            }
            if(arr[i]==res){
                continue;
            }
            if(arr[i]!=res+1){
                return res+1;
            }else{
                res = arr[i];
            }
        }
        return res+1;
    }
int missingNumber(vector<int> &arr) {
        // Your code here
        sort(arr.begin(), arr.end());
        int res = 1, n = arr.size();
        int prev = INT_MIN;
        for(int i=0; i<n; i++){
            if(arr[i]<=0 || arr[i]==prev){
                prev = arr[i];
                continue;
            }
            if(arr[i]!=res){
                return res;
            }else{
                res++;
            }
            prev = arr[i];
        }
        return res;
    }
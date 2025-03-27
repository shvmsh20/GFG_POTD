int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        int res = 0;
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        int n = arr.size(), i=0, j=0, curr = 0;
        while(i<n){
            if(arr[i]<=dep[j]){
                curr++;
                i++;
            }else{
                curr--;
                j++;
            }
            res = max(res, curr);
        }
        return res;
    }
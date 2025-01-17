vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> prefix(n), suffix(n), res(n);
        int curr = 1;
        for(int i=0; i<n; i++){
            curr = curr*arr[i];
            prefix[i] = curr;
        }
        curr = 1;
        for(int i=n-1; i>=0; i--){
            curr = curr*arr[i];
            suffix[i] = curr;
        }
        for(int i=0; i<n; i++){
            int prefixRes = i>0 ? prefix[i-1] : 1;
            int suffixRes = i<(n-1) ? suffix[i+1] : 1;
            res[i] = prefixRes*suffixRes;
        }
        return res;
        
    }
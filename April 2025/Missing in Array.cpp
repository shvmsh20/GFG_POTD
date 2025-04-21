int missingNum(vector<int>& arr) {
        // code here
        int x = 0, n = arr.size();
        for(int i=0; i<n; i++){
            x = x ^ arr[i];
            x = x ^ (i+1);
        }
        x = x ^ (n+1);
        return x;
    }
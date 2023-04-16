int dominantPairs(int n,vector<int> &arr){
        // Code here
        int ct = 0;
        sort(arr.begin(), arr.begin()+n/2);
        sort(arr.begin()+n/2, arr.end());
        for (int i =n/2; i<n; i++) {
            if (lower_bound(arr.begin(), arr.begin()+n/2, arr[i]*5)!=arr.begin()+n/2) {
                int x = n/2-(lower_bound(arr.begin(), arr.begin()+n/2, arr[i]*5)-arr.begin());
                ct+=x;
            }
        }
        return ct;
    }  
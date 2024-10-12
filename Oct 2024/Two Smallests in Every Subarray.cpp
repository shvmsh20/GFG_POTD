int pairWithMaxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        if(n==1){
            return -1;
        }
        int mx = INT_MIN;
        for(int i=0; i<n-1; i++){
            if(arr[i]+arr[i+1]>mx){
                mx = arr[i]+arr[i+1];
            }
        }
        return mx;
    }
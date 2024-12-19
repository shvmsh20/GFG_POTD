int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
        int n = arr.size();
        int last = 0;
        for(int i=0; i<n; i++){
            if((arr[i]-last-1)>=k){
                return last+k;
            }else{
                k-= arr[i]-last-1;
            }
            last = arr[i];
        }
        return last+k;
    }
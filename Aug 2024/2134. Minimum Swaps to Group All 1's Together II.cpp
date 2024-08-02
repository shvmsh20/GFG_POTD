int minSwaps(vector<int>& arr) {
        int n = arr.size();
        int k = 0;
        for(int i=0; i<n; i++){
            if(arr[i]==1){
                k++;
            }
        }
        if((k==1) || (k==n) || (k==0)){
            return 0;
        }
        int zeros=0;
        for(int i=0; i<k; i++){
            if(arr[i]==0){
                zeros++;
            }
        }
        int mn = zeros;
        for(int i=1; i<n; i++){
            if(arr[i-1]==0){
                zeros--;
            }
            if(arr[(i+k-1)%n]==0){
                zeros++;
            }
            mn = min(mn, zeros);
        }
        return mn;
    }
int minSwaps(vector<int>& arr) {
        // code here
         int k = 0;
         int n = arr.size();
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            k++;
        }
    }
    if(k==1 || k==n){
        return 0;
    }
    if(k==0){
        return -1;
    }
    
    int mn, zeros=0;
    for(int i=0; i<k; i++){
        if(arr[i]==0){
            zeros++;
        }
    }
    mn = zeros;
    for(int i=k; i<n; i++){
        if(arr[i]==0){
            zeros++;
        }
        if(arr[i-k]==0){
            zeros--;
        }
        mn = min(mn, zeros);
    }
    return mn;
    }
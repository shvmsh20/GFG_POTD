int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                return i+1;
            }
        }
        return 0;
    }
void reArrange(int arr[], int n) {
        // code here
        int i=0, j=1;
        while(i<n && j<n){
            while(i<n && arr[i]%2==0){
                i+=2;
            }
            while(j<n && arr[j]%2!=0){
                j+=2;
            }
            if(i<n && j<n){
                swap(arr[i], arr[j]);
                i+=2;
                j+=2;
            }
        }
    }
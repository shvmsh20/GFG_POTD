int findMaxAverage(int arr[], int n, int k) {
        // code here
        float avg = 0;
        for(int i=0; i<k; i++){
            avg+= arr[i];
        }
        int x=0;
        float mx = avg;
        for(int i=k; i<n; i++){
            avg = avg - arr[i-k];
            avg = avg + arr[i];
            if(avg>mx){
                x = i-k+1;
                mx = avg;
            }
        }
        return x;
        
    }
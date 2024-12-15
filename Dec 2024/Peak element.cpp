int peakElement(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        for(int i=0; i<n; i++){
           if( (i==0 || arr[i]>=arr[i]) && (i==n-1 || arr[i]>=arr[i+1])){
               return i;
           }
       }
       return -1;
    }
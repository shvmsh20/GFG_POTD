int columnWithMaxZeros(vector<vector<int>>arr,int n){
        
        // Your code here
          int min=n, s=0, col=-1;
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                s+=arr[j][i];
            }
            if (s<min){
                col=i;
                min=s;
            }
            s=0;
        }
        return col;
        
    }
void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        if((n%2)==0){
        for(int i=0;i<n-2;i=i+2){
            swap(arr[i],arr[i+1]);
        }
        swap(arr[n-2], arr[n-1]);
        }
        else{
            for(int i=0;i<=n-2;i=i+2){
            swap(arr[i],arr[i+1]);
        }
        
        } 
        
    }
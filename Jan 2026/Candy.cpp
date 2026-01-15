int minCandy(vector<int> &arr) {
        // code here
         int n=arr.size();
      vector<int> lmax(n, 1), rmax(n, 1);
      
      for(int i=1; i<n; i++){
        if(arr[i] > arr[i-1]) lmax[i]=1+lmax[i-1];      
      }      
      for(int i=n-2; i>=0; i--){
        if(arr[i] > arr[i+1]) rmax[i]=1+rmax[i+1];      
      }
      
      int ans=0;
      for(int i=0; i<n; i++) ans+=max(lmax[i], rmax[i]);
      
      return ans;
    }
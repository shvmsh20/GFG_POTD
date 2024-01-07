bool isPoss(int mxSum, int n, int k, int arr[]){
      int currCount = 1, currSum = 0;
      for(int i=0; i<n; i++){
          if(arr[i]>mxSum){
              return false;
          }
          currSum+= arr[i];
          if(currSum>mxSum){
              currCount++;
              currSum = arr[i];
          }
      }
      return currCount<=k;
  }
    int splitArray(int arr[] ,int n, int k) {
        // code here
        int mx = INT_MIN, sum = 0;
        for(int i=0; i<n; i++){
            mx = max(mx, arr[i]);
            sum+= arr[i];
        }
        int st = mx, end = sum, res = -1;
        while(st<=end){
            int mid = (st+end)/2;
            if(isPoss(mid, n, k, arr)){
                res = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return res;
    }
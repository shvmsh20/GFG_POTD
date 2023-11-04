 int transitionPoint(int arr[], int n) {
        // code here
         int l = 0;
    int h = n-1;
    int ans = -1;
    while(l<=h){
        int m = (l+h)/2;
        if(arr[m]==1){
            ans = m;
            h = m-1;
        }else{
            l = m+1;
        }
    }
   return ans;
    }
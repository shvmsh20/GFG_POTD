bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr, arr+n);
        for(int i=0; i<n; i++){
            int st = i+1, end = n-1;
            int reqSum = -1*(arr[i]);
            while(st<end){
                if((arr[st]+arr[end])==reqSum){
                    return 1;
                }else if((arr[st]+arr[end])<reqSum){
                    st++;
                }else{
                    end--;
                }
            }
        }
        return 0;
    }
void threeWayPartition(vector<int>& arr,int a, int b)
    {
        // code here 
        int n = arr.size();
        int left = 0, mid = 0, right = n-1;
        while(mid<=right){
            if(arr[mid]<a){
                int temp = arr[left];
                arr[left] = arr[mid];
                arr[mid] = temp;
                left++;
                mid++;
            }else if(arr[mid]>=a && arr[mid]<=b){
                mid++;
            }else{
                int temp = arr[right];
                arr[right] = arr[mid];
                right--;
                arr[mid] = temp;
            }
        }
        
    }
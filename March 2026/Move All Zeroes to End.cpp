void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n = arr.size(), left = 0;
        for(int right=0; right<n; right++){
            if(arr[right]!=0){
                arr[left] = arr[right];
                left++;
            }
        }
        while(left<n){
            arr[left] = 0;
            left++;
        }
    }
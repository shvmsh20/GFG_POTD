void sort012(vector<int>& arr) {
        // code here
        int n = arr.size();
        int left = 0, mid = 0, hi = n-1;
        while(mid<=hi){
            if(arr[mid]==0){
                swap(arr[left], arr[mid]);
                left++;
                mid++;
            }else if(arr[mid]==1){
                mid++;
            }else{
                swap(arr[mid], arr[hi]);
                hi--;
            }
        }
    }
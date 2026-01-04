void sort012(vector<int>& arr) {
        // code here
        int lo = 0, mid = 0, hi = arr.size()-1;
        while(mid<=hi){
            if(arr[mid]==0){
                swap(arr[lo], arr[mid]);
                lo++;
                mid++;
            }else if(arr[mid]==1){
                mid++;
            }else{
                swap(arr[hi], arr[mid]);
                hi--;
            }
        }
    }
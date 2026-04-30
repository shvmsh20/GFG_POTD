bool isMaxHeap(vector<int> &arr) {
        // code here
        int n = arr.size();
        for(int i=0; i<n/2; i++){
            if (arr[i] < arr[2*i+1])
                return false;

            if (2*i+2 < n && arr[i] < arr[2*i+2])
                return false;
        }
        return true;
    }
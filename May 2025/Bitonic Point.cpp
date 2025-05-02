int findMaximum(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i] > arr[i+1])
                return arr[i];
        }
        return -1;
    }
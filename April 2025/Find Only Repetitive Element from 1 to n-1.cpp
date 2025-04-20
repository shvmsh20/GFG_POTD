int findDuplicate(vector<int>& arr) {
        // code here
        int index = 0;
        while(arr[index]>0){
            int newIndex = arr[index];
            arr[index] = -1;
            index = newIndex;
        }
        return index;
    }
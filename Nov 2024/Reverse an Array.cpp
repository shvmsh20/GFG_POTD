void reverseArray(vector<int> &arr) {
        // code here
        int last = arr.size()-1, start = 0;
        while(start<last){
            swap(arr[start], arr[last]);
            start++;
            last--;
        }
    }
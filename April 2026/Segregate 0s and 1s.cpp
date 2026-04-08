 void segregate0and1(vector<int> &arr) {
        // code here
        int index = 0, n = arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                swap(arr[index], arr[i]);
                index++;
            }
        }
    }
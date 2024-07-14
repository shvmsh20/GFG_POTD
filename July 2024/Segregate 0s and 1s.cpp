void segregate0and1(vector<int> &arr) {
        // code here
        int l=-1;
        int h = arr.size();
        int n = h;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                l++;
                swap(arr[i], arr[l]);
            }
        }
    }
int findEquilibrium(vector<int> &arr) {
        // code here
        int totSum = 0, n = arr.size();
        for(int x: arr){
            totSum+= x;
        }
        int left = 0;
        for(int i=0; i<n; i++){
            totSum-=arr[i];
            if(left==totSum){
                return i;
            }
            left+= arr[i];
        }
        return -1;
    }
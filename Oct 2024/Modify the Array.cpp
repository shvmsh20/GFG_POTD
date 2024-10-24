vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        // Complete the function
        int n = arr.size();
        for(int i=0; i<n; i++){
            if(i<n-1 && arr[i]!=0 && arr[i]==arr[i+1]){
                arr[i] = arr[i]*2;
                arr[i+1] = 0;
                i++;
            }
        }
        int left = 0;
        for(int i=0; i<n; i++){
            if(arr[i]!=0){
                arr[left] = arr[i];
                left++;
            }
        }
        for(;left<n; left++){
            arr[left] = 0;
        }
        return arr;
    }
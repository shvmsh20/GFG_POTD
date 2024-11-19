void nextPermutation(vector<int>& arr) {
        // code here
        int n = arr.size();
        int index = -1;
        for(int i=n-2; i>=0; i--){
            if(arr[i]<arr[i+1]){
                index = i;
                break;
            }
        }
        if(index==-1){
            sort(arr.begin(), arr.end());
            return;
        }
        int toReplace = -1;
        for(int i =n-1; i>=0; i--){
            if(arr[i]>arr[index]){
                toReplace = i;
                break;
            }
        }
        swap(arr[index], arr[toReplace]);
        sort(arr.begin()+index+1, arr.end());
    }
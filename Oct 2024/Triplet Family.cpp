bool findTriplet(vector<int>& arr) {
        // Your code
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for(int i=n-1; i>=2; i--){
            int st = 0, end = i-1;
            while(st<end){
                if(arr[st]+arr[end]==arr[i]){
                    return true;
                }else if(arr[st]+arr[end]<arr[i]){
                    st++;
                }else{
                    end--;
                }
            }
        }
        return false;
    }
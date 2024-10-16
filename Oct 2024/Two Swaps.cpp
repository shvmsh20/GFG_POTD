bool checkSorted(vector<int> &arr) {
        // code here.
        int n = arr.size();
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(arr[i]!=i+1){
                swap(arr[i], arr[arr[i]-1]);
                cnt++;
                i--;
            }
            if(cnt>2){
                return false;
            }
        }
        if(cnt==1){
            return false;
        }
        return true;
        
    }
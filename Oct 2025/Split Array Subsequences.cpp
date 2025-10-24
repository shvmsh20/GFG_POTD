 bool isPossible(vector<int>& arr, int k) {
        // code here
        if(k>arr.size()) return false;
        if(k==1) return true;
        int n=arr.size();
        int count;
        int i=n-1;
        while(i>0){
            if(arr[i]-arr[i-1]>1) return false;
            count=1;
            while(i>0&&arr[i]==arr[i-1]){
                count++;
                i--;
            }
            if(n/k<count){
                return false;
            }
            i--;
        }
        return true;
    }
int minJumps(vector<int>& arr) {
        // code here
        int mx = 0, n = arr.size(), curr = 0, lastIndex = 0;
        for(int i=0; i<n; i++){
            if(i+arr[i]>mx){
                mx = i+arr[i];
            }
            if(lastIndex == i){
                if(i==mx) return -1;
                curr++;
                lastIndex = mx;
            }
            if(lastIndex>=n-1) return curr;
        }
        return -1;
    }
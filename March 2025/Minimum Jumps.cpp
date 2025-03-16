int minJumps(vector<int>& arr) {
        // code here
        int jumps = 0, lastIndex = 0, mxReach = 0, n = arr.size();
        for(int i=0; i<n; i++){
            mxReach = max(mxReach, i+arr[i]);
            if(lastIndex==i){
                if(mxReach==i){
                    return -1;
                }
                jumps++;
                lastIndex = mxReach;
            }
            if(lastIndex>=n-1){
                return jumps;
            }
        }
        return jumps;
    }
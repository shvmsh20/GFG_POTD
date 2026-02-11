bool isPoss(int x, vector<int> &arr, int k, int w, int n){
        unordered_map<int, int> mp;
        int currAdder = 0;
        for(int i=0; i<n; i++){
            if(mp.find(i)!=mp.end()){
                currAdder-=mp[i];
                mp.erase(i);
            }
            if(arr[i]<x){
                int diff = x-arr[i];
                if(currAdder>=diff){
                    continue;
                }
                int neededK = diff-currAdder;
                if(neededK>k){
                    return false;
                }
                k-=neededK;
                currAdder+= neededK;
                mp[i+w] = neededK;
            }
        }
        return true;
    }
    int maxMinHeight(vector<int> &arr, int k, int w) {
        // code here
        int n = arr.size(), lo = INT_MAX, hi = INT_MIN;
        for(int i=0; i<n; i++){
            lo = min(lo, arr[i]);
            hi = max(hi, arr[i]);
        }
        hi+=k;
        int res = lo;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(isPoss(mid, arr, k, w, n)){
                res = max(res, mid);
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }
        return res;
    }
int findMissing(vector<int> &arr) {
        // code here
        unordered_map<int, int> mp;
        int n = arr.size();
        int diff1 = arr[1]-arr[0], diff2 = -1, cnt1 = 1, cnt2 = 0;
        for(int i=2; i<n; i++){
            int diff = arr[i]-arr[i-1];
            if(diff==diff1){
                cnt1++;
            }else{
                diff2 = diff;
                cnt2++;
            }
        }
        if(diff2==-1){
            return arr[n-1]+diff1;
        }
        int toFind = cnt1==1?diff1:diff2;
        int toAdd = cnt1==1?diff2: diff1;
        for(int i=0; i<n-1; i++){
            int diff = arr[i+1]-arr[i];
            if(diff==toFind){
                return arr[i]+toAdd;
            }
        }
        return -1;
        
    }
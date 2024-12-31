int longestConsecutive(vector<int>& arr) {
        // Your code here
        sort(arr.begin(), arr.end());
        int res=0;
        int cnt=1;
        
        for(int i=1; i<arr.size(); i++){
            if(arr[i]==arr[i-1]+1){
                cnt++;
            }else if(arr[i]==arr[i-1]){
                continue;
            }else{
                cnt=1;
            }
            res=max(res,cnt);
        }
        
        return res;
    }
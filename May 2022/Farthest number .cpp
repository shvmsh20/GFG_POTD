vector<int> farNumber(int n,vector<int> arr){
        //code here
        vector<int> suffix(n);
        suffix[n-1] = arr[n-1];
        for(int i=n-2; i>=0; i--){
            if(arr[i]<suffix[i+1]){
                suffix[i] = arr[i];
            }else{
                suffix[i] = suffix[i+1];
            }
        }
        vector<int> res(n, -1);
        for(int i=0; i<n-1; i++){
            int curr = arr[i];
            int l = i+1;
            int h = n-1;
            int ans=-1;
            while(l<=h){
                int mid = l+(h-l)/2;
                if(suffix[mid]<arr[i]){
                    ans = mid;
                    l = mid+1;
                }else{
                    h = mid-1;
                }
            }
            res[i] = ans;
        }
        return res;
    }
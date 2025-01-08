int countTriangles(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        int count=0, n = arr.size();
        for(int i=n-1;i>=2;i--){
            int r=i-1;
            int l=0;
            while(l<r){
                if(arr[l]+arr[r]>arr[i]){
                    count+=r-l;
                    r--;
                }else{
                    l++;
                }
                
            }
        }
        return count;
    }
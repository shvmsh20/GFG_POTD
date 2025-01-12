int maxWater(vector<int> &a) {
        // code here
        int n = a.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        left[0]=a[0];
        right[n-1]=a[n-1];
        for(int i=1;i<n;i++){
            if(a[i]>left[i-1]){
                left[i]=a[i];
            }else{
                left[i]=left[i-1];
            }
            if(a[n-i-1]>right[n-i]){
                right[n-i-1]=a[n-i-1];
            }else{
                right[n-i-1]=right[n-i];
            }
        }
        long long ans=0;
        for(int i=1;i<n-1;i++){
            ans+= (min(left[i],right[i])-a[i]);
        }
        return ans;
    }
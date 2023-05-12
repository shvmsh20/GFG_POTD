int arrayOperations(int n, vector<int> &arr) {
        // code here
        int num_found=0,ans=0,zero_found=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                zero_found=1;
                if(num_found==1){
                    num_found=0;
                    ans++;
                }
            }
            else if(arr[i]!=0)
                num_found=1;
        }
        
        if(zero_found==0)
            return -1;
        if(num_found==1 && ans!=0)
            return ++ans;
        return ans;
    }
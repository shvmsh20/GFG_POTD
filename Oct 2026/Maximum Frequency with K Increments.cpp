int maxFrequency(vector<int>& arr, int k) {
        int i=0,j=0;
             int n=arr.size();
             int prevsum=0;
             int ans=1;
             sort(arr.begin(),arr.end());
             while(j<n){
                 if(j>0) prevsum+=(j-i)*(arr[j]-arr[j-1]);
                 if(prevsum<=k){
                     ans=max(ans,j-i+1);
                     j++;
                 }
                 else{
                     i=i+1;
                     j=i;
                     prevsum=0;
                 }
             }
             return ans;// code here
        
    }
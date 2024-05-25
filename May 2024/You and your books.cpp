long long max_Books(int arr[], int n, int k) {
        // Your code here
         long long ans=0L;
       pair<long long,int>p;
       p={0,0};
       for(int i=0;i<n;i++){
           if(arr[i]<=k){
               if(p.second+1==i) p.first+=arr[i],p.second=i;
               else ans=max(ans,p.first),p={arr[i],i};
           }
           ans=max(ans,p.first);
       }
       return ans;
    }
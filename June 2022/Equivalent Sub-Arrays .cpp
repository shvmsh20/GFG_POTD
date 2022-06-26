int countDistinctSubarray(int arr[], int n)
    {
        //code here.
         unordered_map<int,int>m;
       unordered_map<int,int>m2;
      for(int i=0;i<n;i++)
        m[arr[i]]++;
      //base case
      if(m.size()==n) return 1;
      
       int i=0;
       while(m.size()!=m2.size()){
          m2[arr[i++]]++;
       }
       int cnt=0;
       int j=0;
       while(i<=n){
           
         if(m.size()<=m2.size()){
           while(m.size()<=m2.size()){
             cnt+=n-i+1;
             m2[arr[j]]--;
             if(m2[arr[j]]==0){
              m2.erase(arr[j]);
              }
              j++;
            } 
          }
        
          m2[arr[i++]]++;
          if(i==n and m.size()==m2.size()) return cnt+1;
        }
      
       return cnt;
    }
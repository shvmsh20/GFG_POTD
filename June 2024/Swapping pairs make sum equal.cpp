int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        int sum1 = 0,sum2 = 0;
         
         for(int i = 0;i<n;i++)sum1+=a[i];
         for(int i= 0;i<m;i++)sum2+=b[i];
          
          if((sum2-sum1) % 2 != 0)return -1;
         int target = (sum2-sum1)/2;
         
         
           
          unordered_map<int,int>mp; 
          
         for(int i = 0;i<n;i++){
             mp[target+a[i]] = 1;
         }
          for(int j = 0;j<n;j++){
              if(mp[b[j]] == 1)return 1;
          }
          
          return -1;
    }
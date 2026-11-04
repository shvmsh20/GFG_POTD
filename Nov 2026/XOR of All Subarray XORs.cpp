int subarrayXor(vector<int>& arr) {
        // code here
        int pre = 0;
               int ans = 0;
               int n = arr.size();

               for(int i=0;i<n;i++){
                   if((i+1)%2)pre^=arr[i];
                   ans^=pre;
               }

               return ans;
    }
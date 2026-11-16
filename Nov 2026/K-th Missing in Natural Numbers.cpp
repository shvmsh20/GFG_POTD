int findKthSmall(vector<int>& arr, int k) {
        // code here
        int start = k, end = k + arr.size();

               while(start < end){
                   int mid = start + (end - start) / 2;
                   int miss = mid;
                   for(int v: arr)
                       if(v <= mid)
                           miss--;
                   if(miss < k)
                       start = mid + 1;
                   else
                       end = mid;
               }

               return start;
    }
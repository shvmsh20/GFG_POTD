int maxWater(vector<int> &A) {
        // code here
         long long res = 0;
         int left = 0, right = A.size()-1;
         while(left<=right){
             long long ans = min(A[left], A[right])*(right - left);
             if(A[left]<=A[right]){
                 left++;
             }else{
                 right--;
             }
             res = max(res, ans);
         }
         return res;
    }
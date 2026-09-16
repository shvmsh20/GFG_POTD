int dominantPairs(vector<int> &arr) {
        // Code here
        int N=arr.size();
               int n=N/2;

               vector<int>tmp1, tmp2;

               for(int i=0; i<n; i++){
                   tmp1.push_back(arr[i]);
               }

               for(int i=n; i<N; i++){
                   tmp2.push_back(arr[i]);
               }

               sort(tmp1.begin(), tmp1.end());

               int cnt=0;

               for(int i=0; i<n; i++){
                   int j=lower_bound(tmp1.begin(), tmp1.end(), 5*tmp2[i])-tmp1.begin();
                   cnt+=(n-j);
               }

               return cnt;
    }
};
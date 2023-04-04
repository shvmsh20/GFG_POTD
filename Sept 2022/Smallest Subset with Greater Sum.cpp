int minSubset(vector<int> &Arr,int N){
        sort(Arr.begin(), Arr.end());
       long long sum =0;
       for(int i =0;i<N;i++){
           sum += Arr[i];
       }
       long long sumBack = 0,cnt = 0;
       for(int i = N-1;i>=0;i--){
           sumBack += Arr[i];
           sum -= Arr[i];
           cnt++;
           if(sumBack > sum){
               return cnt;
           }
       }
       return cnt;
    }
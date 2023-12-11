long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long long sum=0,ans =0;
          int n=K;
          while(n){
              sum+=Arr[n-1];
              n--;
          }
          ans=sum;
          for(int i=K;i<N;i++){
              sum+=Arr[i]-Arr[i-K];
              ans = sum>ans?sum:ans;
          }
          return ans;
    }
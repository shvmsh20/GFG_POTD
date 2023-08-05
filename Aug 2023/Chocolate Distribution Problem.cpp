long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
     sort(a.begin(), a.end());

      long long res = a[m-1]-a[0];


      for(long long i=1; i<n-m+1; i++){
          long long maxVal = a[i+m-1];
          long long minVal = a[i];
          
          res = min(res,maxVal-minVal);
      }
      return res;
    
    }  
int smallestSumSubarray(vector<int>& a){
      //Code here
      int res=INT_MAX, currSum=0;
      for(int i=0; i<a.size(); i++){
          currSum+=a[i];
          res = min(res, currSum);
          if(currSum>0){
              currSum=0;
          }
      }
      return res;
  }
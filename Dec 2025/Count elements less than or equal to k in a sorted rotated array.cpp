virtual int miniInd(int l, int r, vector<int> &arr){
      if(l>=r)
        return l;
      int m = l + (r-l)/2;
      
      if(arr[m] < arr[r])
        return miniInd(l, m, arr);      
      return miniInd(m+1, r, arr);
    }
    virtual int countLessEqual(vector<int>& arr, int x){
      int n = arr.size();
      int mini = miniInd(0, n-1, arr);
      
      int ans=0;
      int r1 = (upper_bound(arr.begin()+mini, arr.end(), x)) - arr.begin();
      ans += (r1-mini);
      
      if(mini > 0){
        int r2 = (upper_bound(arr.begin(), arr.begin()+mini, x)) - arr.begin();
        ans += (r2-0);
      }
        
      return ans;
    }
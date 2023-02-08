vector<long long int> countZero(int N, int K, vector<vector<int>>& arr){
      //Code Here
      unordered_set<int> row;
    unordered_set<int> col;
    vector<long long> ans(K,0);
    long long n =N;
    long long total_zero=n*n;
    long long total_one,r,c;
    for(int i=0;i<K;i++) {
        row.insert(arr[i][0]);
        col.insert(arr[i][1]);
        r=row.size();
        c=col.size();
        total_one = ((r+c)*n) - (r*c);
        ans[i]=total_zero - total_one;
    }
    return ans;
  }
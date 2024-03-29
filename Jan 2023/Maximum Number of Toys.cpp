vector<int> maximumToys(int N,vector<int> A,int Q,vector<vector<int>> Queries){
      // code here
      vector<pair<int,int>> arr(N);
      for(int i=0; i<N; i++) arr[i] = {A[i],i};
      
      sort(arr.begin(),arr.end());
      
// creating a map for original index to new sorted index
      map<int,int> mp;
      for(int i=0; i<N; i++)
      {
          mp[arr[i].second] = i;
      }
      
// prefix sum and binary search for maximum toys we can buy
      vector<ll> prefix(N+1);
      prefix[0] = 0;
      for(int i=1; i<=N; i++)
      {
          prefix[i] = prefix[i-1] + arr[i-1].first;
      }
      
// result vector for Q queries
      vector<int> res(Q);
      
      for(int i=0; i<Q; i++)
      {
          ll c = Queries[i][0];
          int k = Queries[i][1];
          
          int l = 0;
          int r = N;
          int ans = 0;
          while(l<=r)
          {
              int mid = l + (r-l)/2;
              
              if(prefix[mid]<=c)
              {
                  ans = mid;
                  l = mid+1;
              }
              else r = mid-1;
          }
          

          if(ans <= 0)
          {
              res[i] = 0;
              continue;
          }

// index of last purchase, idx is ans-1 (0 based indexing used).
          int idx = ans-1;

// remaining money, rem
          ll rem = c - prefix[ans];
          
// set notRemoved to check if toys are broken after idx, when we try to purchase with remaining money

          set<int> notRemoved;
         
// checking for all k toys
          for(int j = 0; j<k; j++)
          {
// qIdx gives the index of broken toy in sorted array
              int qIdx = mp[Queries[i][j+2] - 1];
              if(qIdx<=idx)
              {
                  ans--;
                  rem += arr[qIdx].first;
              }
              else notRemoved.insert(qIdx);
          }
          
// purchasing with remaining money
          int s = idx+1;
          while(s<N && arr[s].first<=rem)
          {
              if(!notRemoved.count(s))
              {
                  ans++;
                  rem-=arr[s].first;
                  
              }
              s++;
          }
          
// storying the ans in res vector
          res[i] = ans;
          
          
      }
      
      return res;
  }
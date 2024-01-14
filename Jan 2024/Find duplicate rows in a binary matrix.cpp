vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        // Your code here
      unordered_map<string, int> mp;
      vector<int> res;
      for(int i=0; i<M; i++){
          string key;
          for(int j=0; j<N; j++){
              key+= to_string(matrix[i][j]);
          }
          if(mp.find(key)!=mp.end()){
              res.push_back(i);
          }else{
              mp[key] = i;
          }
      }
      return res;
    } 
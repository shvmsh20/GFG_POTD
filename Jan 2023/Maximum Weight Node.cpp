nt maxWeightCell(int n, vector<int> edges)
  {
      // code here
      int mxweight = 0, mxweightCell = 0;
      vector<int>weights(n);
      for(int i = 0; i < n; i++){
          if(edges[i] == -1)
            continue;
            
          weights[edges[i]] += i;
          if(weights[edges[i]] > mxweight){
              mxweight = weights[edges[i]];
              mxweightCell = edges[i];
          }
          else if(weights[edges[i]] == mxweight && edges[i] > mxweightCell)
              mxweightCell = edges[i];
      }
      return mxweightCell;  
  }
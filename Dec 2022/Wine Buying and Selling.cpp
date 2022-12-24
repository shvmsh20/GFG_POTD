long long int wineSelling(vector<int>& Arr, int n){
      //Code here.
      long long res = 0;
      int buy = 0, sell = 0;
      while(buy<n && sell<n){
          if(Arr[buy]<=0){
              buy++;
              continue;
          }
          if(Arr[sell]>=0){
              sell++;
              continue;
          }
          if(Arr[buy]>=abs(Arr[sell])){
              res+= (abs(Arr[sell])*abs(buy-sell));
              Arr[buy] +=Arr[sell];
              Arr[sell] = 0;
              sell++;
          }else{
              res+= (Arr[buy]*abs(buy-sell));
              Arr[sell]+= Arr[buy];
              Arr[buy] = 0;
              buy++;
          }
      }
      return res;
  }
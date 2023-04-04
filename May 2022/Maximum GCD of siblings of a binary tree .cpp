int maxBinTreeGCD(vector<vector<int>> arr, int N) {
        // code here
        sort(arr.begin(),arr.end());
         int maxi = 0;
         for(int i=1;i<arr.size();i++){
            if(arr[i][0]==arr[i-1][0]){
                 int res = __gcd(arr[i][1],arr[i-1][1]);
                 maxi = max(maxi,res);
            }
         }
         return maxi;
    }
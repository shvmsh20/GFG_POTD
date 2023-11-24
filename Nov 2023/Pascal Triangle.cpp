vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
         // code here
         vector<vector<long long>>ans;
         for(int i=0;i<n;i++){
             vector<long long>temp(i+1,1);
             if(i>=2){
            for(int j=1;j<temp.size()-1;j++){
                temp[j]=(ans[i-1][j]+ans[i-1][j-1])%1000000007;
                }
             }
            ans.push_back(temp);
         }
         return ans[n-1];
    }
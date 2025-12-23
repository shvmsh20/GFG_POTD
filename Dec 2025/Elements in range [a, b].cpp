vector<int> cntInRange(vector<int> &arr, vector<vector<int>> &queries) {
        // code here
         if (arr.empty()) return vector<int>(queries.size(), 0);
        
        int maxi=0;
        for(int i=0;i<queries.size();i++){
            maxi = max(maxi,queries[i][1]);
        }
        vector<long long>range(maxi+1,0);
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]<= maxi){
                range[arr[i]]++;
            }
        }
        
        for(int i=1;i<range.size();i++){
            range[i]+= range[i-1];
        }
        
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            int s= queries[i][0];
            int l = queries[i][1];
            
            if(s==0){
                ans.push_back(range[l]);
            }
            else{
                ans.push_back(range[l]-range[s-1]);
            }
        }
        return ans;
    }
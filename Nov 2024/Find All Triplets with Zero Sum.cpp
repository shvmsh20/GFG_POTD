vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        int n=arr.size();
        vector<int> idxs;
        for(int i=0;i<n;i++) idxs.push_back(i);
        sort(idxs.begin(),idxs.end(),[&](int i,int j){
            return arr[i]<arr[j];
        });
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            int t=-arr[idxs[i]];
            int j=i+1,k=n-1;
            while(j<k){
                int sum=arr[idxs[j]]+arr[idxs[k]];
                if(sum<t) j++;
                else if(sum>t) k--;
                else{
                    if(arr[idxs[j]]==arr[idxs[k]]){
                        for(int p=j;p<k;p++){
                            for(int q=p+1;q<=k;q++) 
                                ans.push_back({idxs[i],idxs[j],idxs[k]});
                        }
                        k=j; continue;
                    }
                    vector<int> t1,t2;
                    t1.push_back(idxs[j]);
                    t2.push_back(idxs[k]);
                    int p=arr[idxs[j]], q=arr[idxs[k]];
                    j++;
                    while(j<k&&arr[idxs[j]]==p){
                        t1.push_back(idxs[j]);
                        j++;
                    }
                    k--;
                    while(k>j&&arr[idxs[k]]==q){
                        t2.push_back(idxs[k]);
                        k--;
                    }
                    for(auto x : t1){
                        for(auto y : t2)
                            ans.push_back({idxs[i],x,y});
                    }
                }
            }
        }
        for(auto& a : ans) sort(a.begin(),a.end());
        return ans;
    }
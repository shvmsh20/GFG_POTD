vector<int> leaders(int a[], int n){
        // Code here
        vector<int> ans;
        for(int i=n-1;i>=0;i--){
            if(ans.empty()||ans.back()<=a[i]){
                ans.push_back(a[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
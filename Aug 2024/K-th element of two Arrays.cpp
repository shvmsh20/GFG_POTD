int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        vector<int>ans(arr1.begin(),arr1.end());
        ans.insert(ans.end(),arr2.begin(),arr2.end());
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
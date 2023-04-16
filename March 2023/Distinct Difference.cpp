vector<int> getDistinctDifference(int N, vector<int> &A) {
        // code here
          set<int> left, right;
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int i=0;i<N;i++){
            left.insert(A[i]);
            mp[A[i]]++;
        }
        for(int i=N-1;i>=0;i--){
            if(mp[A[i]]==1){
               left.erase(A[i]);
            }
            mp[A[i]]--;
            int l = left.size();
            int r = right.size();
            // cout<<l<<" "<<r<<endl;
            ans.push_back(l-r);
            right.insert(A[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
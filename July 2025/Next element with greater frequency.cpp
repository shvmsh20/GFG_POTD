 vector<int> findGreater(vector<int>& arr) {
        // code here
        unordered_map<int,int>m;
        for(int i:arr){
            m[i]++;
        }
        int n=arr.size();
        stack<int>st;
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            while(!st.empty() and m[arr[i]]>m[arr[st.top()]]){
                ans[st.top()]=arr[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
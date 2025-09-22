vector<int> maxOfMins(vector<int>& arr) {
        //  code here
           int n = arr.size();
        stack<int> st;
        vector<int> lse(n, -1);
        vector<int> rse(n, n);
        for(int i=0; i<n; i++)
        {
            while(!st.empty() && arr[st.top()] >= arr[i])
            {
                rse[st.top()] = i;
                st.pop();
            }
            if(!st.empty())
                lse[i] = st.top();
            st.push(i);
        }
        vector<int> ans(n, -1);
        for(int i=0; i<n; i++)
        {
            int len = rse[i]-lse[i]-2;
            ans[0] = max(ans[0], arr[i]);
            ans[len] = max(ans[len], arr[i]);
        }
        int maxVal = ans[n-1];
        for(int i=n-2; i>=0; i--)
        {
            maxVal = max(maxVal, ans[i]);
            ans[i] = max(ans[i], maxVal);
        }
        return ans;
    }
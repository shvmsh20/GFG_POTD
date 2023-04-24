vector<int> nearestSmallerTower(vector<int> arr)
    {
        // code here
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n);
        for(int i = 0; i<n; i++){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            if(st.empty()) ans[i] = -1;
            else ans[i] = st.top();
            st.push(i);
        }
        
        st = stack<int>();
        for(int i = n-1; i>=0; i--){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            if(!st.empty() && ((abs(i-ans[i])>abs(i-st.top()) || (abs(i-ans[i])==abs(i-st.top()) && arr[st.top()]<arr[ans[i]])) || ans[i]==-1)) {
                ans[i] = st.top();
            }
            st.push(i);
        }
        return ans;
    }
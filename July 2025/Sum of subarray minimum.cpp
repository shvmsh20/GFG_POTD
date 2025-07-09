int sumSubMins(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int>nse(n,n);
        vector<int>pse(n,-1);
        stack<int>st;
        for(int i = 0; i<n;i++){
            while(!st.empty() && arr[i] < arr[st.top()] ){
                nse[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i = n-1; i >= 0;i--){
            while(!st.empty() && arr[i] <= arr[st.top()] ){
                pse[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        int ans = 0;
        for(int i = 0; i< n; i++){
            ans += ((i - pse[i]) * (nse[i] - i) * arr[i]);
        }
        return ans;
    }
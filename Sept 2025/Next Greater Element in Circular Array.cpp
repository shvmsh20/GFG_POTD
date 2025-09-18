vector<int> nextGreater(vector<int> &arr) {
        // code here
        int n=arr.size();
        stack<int> st;
        vector<int> ans;
        
        for(int i=n-1; i>=0; i--) {
            while(!st.empty() && st.top()<=arr[i])    st.pop();
            
            if(st.empty())  ans.push_back(-1);
            else    ans.push_back(st.top());
            st.push(arr[i]);
        }
        
        reverse(ans.begin(), ans.end());
        for(int i=n-1; i>=0; i--) {
            if(st.empty())  break;
            if(ans[i]!=-1)  continue;
            
            while(!st.empty() && st.top()<=arr[i])    st.pop();
            if(st.empty())  ans[i]=-1;
            else    ans[i]=st.top();
        }
        
        return ans;

    }
vector<int> calculateSpan(vector<int>& arr) {
        // write code here
        vector<int> ans;
        stack<int> st;
        
        st.push(-1);
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            while(st.top()!=-1 && arr[i]>=arr[st.top()]){
                st.pop();
            }
            ans.push_back(i-st.top());
            st.push(i);
            
        }
        
        return ans;
    }
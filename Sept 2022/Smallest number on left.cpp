vector<int> leftSmaller(int n, int a[]){
        // code here
        vector<int> res(n, -1);
        stack<int> st;
        for(int i=0; i<n; i++){
            while(!st.empty() && st.top()>=a[i]){
                st.pop();
            }
            if(!st.empty()){
                res[i] = st.top();
            }
            st.push(a[i]);
        }
        return res;
    }
    
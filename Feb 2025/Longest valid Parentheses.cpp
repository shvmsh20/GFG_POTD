int maxLength(string& str) {
        // code here
        int n = str.size(), start = -1, res = 0;
        stack<int> st;
        for(int i=0; i<n; i++){
            if(str[i]=='('){
                st.push(i);
            }else{
                if(!st.empty()){
                    st.pop();
                    if(!st.empty()){
                        res = max(res, i-st.top());
                    }else{
                        res = max(res, i-start);
                    }
                }else{
                    start = i;
                }
            }
        }
        return res;
    }
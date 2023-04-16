string removePair(string s) {
        // code here
        stack<char> st;
        for(int i=0; i<s.length(); i++){
            if(st.empty()){
                st.push(s[i]);
            }else{
                if(st.top()==s[i]){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }
        }
        string res;
        while(!st.empty()){
            res+= st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        if(res.length()==0){
            return "-1";
        }
        return res;
        
    }
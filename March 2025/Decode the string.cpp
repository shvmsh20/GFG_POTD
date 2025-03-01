string decodedString(string &s) {
        // code here
        stack<char> st;
        for(int i=0; i<s.length(); i++){
            if(s[i]==']'){
                string temp;
                while(!st.empty() && st.top()!='['){
                    temp=st.top()+temp;
                    st.pop();
                }
                st.pop();
                string num;
                while(!st.empty() && isdigit(st.top())){
                    num = st.top()+num;
                    st.pop();
                }
                int number = stoi(num);
                string res;
                for(int j=0; j<number; j++){
                    res = res+temp;
                }
                for(int j=0; j<res.length(); j++){
                    st.push(res[j]);
                }
            }else{
                st.push(s[i]);
            }
        }
        string res;
        while(!st.empty()){
            res = st.top()+res;
            st.pop();
        }
        return res;
    }
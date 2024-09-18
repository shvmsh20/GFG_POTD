bool ispar(string s)
    {
        // Your code here
        stack<char> st;
        for(int x: s){
            if(x=='(' || x=='{' || x=='['){
                st.push(x);
            }else{
                if(st.empty()){
                    return false;
                }
                char top = st.top();
                st.pop();
                if(!((x==')' && top=='(') || (x=='}' && top=='{') || (x==']' && top=='['))){
                    return false;
                }
            }
        }
        return st.empty();
    }
bool isPair(char open, char close){
        return (open=='(' && close==')') || (open=='{' && close=='}') || (open=='[' && close==']');
    }
    bool isBalanced(string& s) {
        // code here
        stack<char> st;
        for(char x: s){
            if(x=='(' || x=='{' || x=='['){
                st.push(x);
            }else{
                if(st.empty()){
                    return false;
                }else{
                    char top = st.top();
                    st.pop();
                    if(!isPair(top, x)){
                        return false;
                    }
                }
            }
        }
        return st.empty();
    }
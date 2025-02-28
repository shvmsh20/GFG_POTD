int evaluate(vector<string>& arr) {
        // code here
        stack<int> st;
        for(string x: arr){
            if(x=="+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b+a);
            }else if(x=="-"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b-a);
            }else if(x=="*"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(a*b);
            }else if(x=="/"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b/a);
            }else{
                st.push(stoi(x));
            }
        }
        return st.top();
    }
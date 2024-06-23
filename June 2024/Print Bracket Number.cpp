vector<int> bracketNumbers(string str) {
        // Your code goes here
        int mx = 0;
        stack<int> st;
        vector<int> res;
        for(char x: str){
            if(x=='('){
                mx++;
                st.push(mx);
                res.push_back(mx);
            }else if(x==')'){
                res.push_back(st.top());
                st.pop();
            }
        }
        return res;
        
    }
stack<pair<int, int>> st;
    Solution() {
        // code here
    }

    // Add an element to the top of Stack
    void push(int x) {
        // code here
        if(st.empty()){
            st.push({x, x});
        }else{
            pair<int, int> p = st.top();
            int mn = min(x, p.second);
            st.push({x, mn});
        }
    }

    // Remove the top element from the Stack
    void pop() {
        // code here
        if(!st.empty()) st.pop();
    }

    // Returns top element of the Stack
    int peek() {
        // code here
        if(st.empty()){
            return -1;
        }
        return st.top().first;
    }

    // Finds minimum element of Stack
    int getMin() {
        // code here
        if(st.empty()){
            return -1;
        }
        return st.top().second;
    }
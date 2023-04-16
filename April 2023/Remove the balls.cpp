int finLength(int N, vector<int> color, vector<int> radius) {
        stack<int> st;
    for (int i = 0; i < N; i++) {
        if (!st.empty() &&
            color[i] == color[st.top()] &&
            radius[i] == radius[st.top()]) {
            st.pop();
        } else {
            st.push(i);
        }
    }
    return st.size();
    }
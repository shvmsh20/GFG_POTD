bool canRepresentBST(vector<int> &arr) {
        // code here
         stack<int> st;
        int lowerBound = INT_MIN;

        for (int x : arr) {
            if (x < lowerBound)
                return false;

            while (!st.empty() && x > st.top()) {
                lowerBound = st.top();
                st.pop();
            }
            st.push(x);
        }
        return true;
    }
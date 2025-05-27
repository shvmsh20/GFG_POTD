vector<int> leafNodes(vector<int>& arr) {
        // code here
        int N = arr.size();
        vector<int> res;
        stack<int> st;
        st.push(arr[0]);
        for(int i=1; i<N; i++){
            if(st.top()>arr[i]){
                st.push(arr[i]);
            }else{
                int count=0;
                int temp = st.top();
                while(!st.empty() && st.top()<arr[i]){
                    st.pop();
                    count++;
                }
                st.push(arr[i]);
                if(count>=2){
                    res.push_back(temp);
                }
            }
        }
        res.push_back(st.top());
        return res;
    }
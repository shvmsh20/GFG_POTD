vector<int> maxOfMins(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        stack<int> st;
        vector<int> res(n, 0);
        vector<int> range(n);
        for(int i=0; i<n; i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                int index = st.top();
                st.pop();
                int width;
                if(st.empty()){
                    width = i;
                }else{
                    width = i-st.top()-1;
                }
                range[index] = width;
            }
            st.push(i);
        }
        while(!st.empty()){
            int index = st.top();
            st.pop();
            int width;
            if(st.empty()){
                width = n;
            }else{
                width = n - st.top()-1;
            }
            range[index] = width;
        }
        
        for(int i=0; i<n; i++){
            int t = range[i]-1;
            res[t] = max(res[t], arr[i]);
        }
        for(int i=n-2; i>=0; i--){
            res[i] = max(res[i], res[i+1]);
        }
        return res;
    }
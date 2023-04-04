vector<int> findLeastGreater(vector<int>& arr, int n) {
        set<int> st;
        for(int i=n-1; i>=0; i--){
            auto it = st.upper_bound(arr[i]);
            st.insert(arr[i]);
            if(it==st.end()){
                arr[i] = -1;
            }else{
                arr[i] = *it;
            }
        }
       return arr;
    }
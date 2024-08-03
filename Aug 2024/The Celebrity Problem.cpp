int celebrity(vector<vector<int> >& M) {
        // code here
        stack<int> st;
       int n = M.size();
    for(int i=0; i<n; i++){
        st.push(i);
    }
    while(st.size()>=2){
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();
        if(M[a][b]){
            st.push(b);
        }else{
            st.push(a);
        }
    }
    int candid = st.top();
    for(int i=0; i<n; i++){
        if(i==candid){
            continue;
        }
        if(M[candid][i] || M[i][candid]==false){
            return -1;
        }
    }
    return candid;
    }
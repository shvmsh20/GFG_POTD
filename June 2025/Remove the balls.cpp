int findLength(vector<int> &color, vector<int> &radius) {
        // code here
        stack<pair<int, int>> st;
        int n = color.size();
        for(int i=0; i<n; i++){
            if(st.empty()){
                st.push({color[i], radius[i]});
            }else{
                
                
                if(st.top().first==color[i] && st.top().second==radius[i]){
                    st.pop();
                }else{
                    st.push({color[i], radius[i]});
                }
            }
        }
        return st.size();
    }
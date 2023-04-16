vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        // code here
        stack <int> st;
    for(int i=0;i<asteroids.size();i++){
        if(asteroids[i] > 0)
            st.push(asteroids[i]);
        else{
            bool flag = false;
            while(!st.empty()){
                if(st.top() < 0){
                    st.push(asteroids[i]);
                    break;
                }
                else if (st.top() < -1 * asteroids[i])
                    st.pop();
                else
                    break;
            }
           
            if(!st.empty() && st.top() == -1 * asteroids[i])
                st.pop();
           
            if(st.empty())
                st.push(asteroids[i]);
        }
    }
    vector <int> res;
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    reverse(res.begin(), res.end());
    re
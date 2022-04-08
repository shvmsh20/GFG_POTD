vector<int> print_next_greater_freq(int arr[],int n)
    {
        // code here
        stack<pair<int, int>> st;
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        vector<int> res(n);
        res[n-1] = -1;
        st.push(make_pair(arr[n-1], mp[arr[n-1]]));
        for(int i=n-2; i>=0; i--){
            int num = arr[i];
            int numfreq = mp[num];
            while(!st.empty() && st.top().second<=numfreq){
                st.pop();
            }
            if(st.empty()){
                res[i] = -1;
            }else{
                res[i] = st.top().first;
            }
            st.push(make_pair(num, numfreq));
        }
        return res;
    }
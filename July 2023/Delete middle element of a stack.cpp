void deleteMid(stack<int>&s, int n)
    {
        // code here.. 
        vector<int>v;
        for(int i=0;i<n/2;i++){
            v.push_back(s.top());
            s.pop();
        }
        s.pop();
        for(int i=0;i<v.size();i++){
            s.push(v[n/2  - 1 -i]);
        } 
    }
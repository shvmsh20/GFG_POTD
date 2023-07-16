queue<int> rev(queue<int> q)
    {
        // add code here.
        vector<int>s;
        while(!q.empty())
        {
            s.push_back(q.front());
            q.pop();
        }
        reverse(s.begin(),s.end());
        for(int i:s)
        {
            q.push(i);
        }
        return q;
    }
void Reverse(stack<int> &St){
        queue<int>q;
        while(!St.empty())
        {
            int elem = St.top();
            St.pop();
            q.push(elem);
        }
        
        while(!q.empty())
        {
            int elem = q.front();
            q.pop();
            St.push(elem);
        }
    }
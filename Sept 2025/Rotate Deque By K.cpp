void rotateDeque(deque<int>& dq, int type, int k) {
        // code here
        int n=dq.size();
        if(type==1)
        {
            for(int i=0;i<k;i++)
            {
                int x=dq.at(n-1);
                dq.pop_back();
                dq.push_front(x);
            }
        }
        else
        {
            for(int i=0;i<k;i++)
            {
                int x=dq.at(0);
                dq.pop_front();
                dq.push_back(x);
            }
        }
    }
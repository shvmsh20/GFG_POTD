vector<int> find3Numbers(vector<int> &arr) {
        // Code here
         int n=arr.size();
        vector<int> left(n);
        vector<int> right(n);
        
        right[n-1]=-1;
        stack<int> s;
        s.push(arr[n-1]);
        
        for(int i=n-2;i>=0;i--)
        {
            while(!s.empty() && s.top()<=arr[i])
              s.pop();
              
              if(s.empty())
              {
                  right[i]=-1;
              }
             else
             {
                 right[i]=s.top();
             }
             
             s.push(arr[i]);
        }
        
        while(!s.empty())
        s.pop();
        
        left[0]=-1;
        s.push(arr[0]);
        
        for(int i=1;i<n;i++)
        {
            while(!s.empty() && s.top()>=arr[i])
              s.pop();
              
              if(s.empty())
              {
                  left[i]=-1;
              }
             else
             {
                 left[i]=s.top();
             }
             
             s.push(arr[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            if(left[i]!=-1 && right[i]!=-1)
               return {left[i],arr[i],right[i] };
        }
        
        
        return {};
        
    }
int verticalWidth(Node* root) {
        // code here
        if(!root)return 0;
        int l=0,r=0;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        
        while(!q.empty())
        {
            auto c=q.front();
            q.pop();
            l=min(c.second,l),r=max(c.second,r);
        
            if(c.first->left)q.push({c.first->left,c.second-1});
            if(c.first->right)q.push({c.first->right,c.second+1});
        }
        return r-l+1;
    }
vector <int> verticalSum(Node *root) {
        // add code here.
         map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int p=q.front().second;
            Node * r=q.front().first;
            mp[p]+=r->data;
            q.pop();
            if(r->left){
                q.push({r->left,p-1});
            }
            if(r->right){
                q.push({r->right,p+1});
            }
        }
        vector<int>ans;
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
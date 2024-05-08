void find(Node *root , vector<int> &v , vector<vector<int>> &ans)
    {
        if(!root)
        return;
        
        if(!root->left and !root->right)
        {
            v.push_back(root->data);
            ans.push_back(v);
            v.pop_back();
            return;
        }
        
        v.push_back(root->data);
        find(root->left,v,ans);
        find(root->right,v,ans);
        
        v.pop_back();
    }
    
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int> >ans;
        vector<int> v;
        find(root,v,ans);
        
        return ans;
    }
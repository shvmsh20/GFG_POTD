int help(Node *root, int &ans){
        if(!root)
        return 0;
        int l=help(root->left,ans);
        int r=help(root->right,ans);
        ans+=abs(l)+abs(r);
        return root->key-1+l+r;
    }
    int distributeCandy(Node* root)
    {
        //code here
        int ans=0;
        help(root,ans);
        return ans;
    }
int solve(Node* root,int &res){
        if(root == NULL)
            return 0;
        int l = solve(root->left,res);
        int r = solve(root->right,res);
        
        int temp = max(max(l,r)+root->data,root->data);
        int ans = max(temp,l+r+root->data);
        res = max(res,ans);
        return temp;
    }
    int findMaxSum(Node* root)
    {
        int res=INT_MIN;
        solve(root,res);
        return res;
    }
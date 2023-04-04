int util(Node* root){
        if(root==nullptr){
            return 0;
        }
        int l = maxPathSum(root->left);
        int r = maxPathSum(root->right);
        return max(l, r)+root->data;
    }
    int maxPathSum(Node* root)
    {
        return util(root);
    }
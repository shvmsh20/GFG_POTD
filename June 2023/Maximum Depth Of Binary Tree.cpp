int maxDepth(Node *root) {
        // Your code here
        if(root==nullptr){
            return 0;
        }
        int lmax = maxDepth(root->left);
        int rmax = maxDepth(root->right);
        return max(lmax, rmax)+1;
    }
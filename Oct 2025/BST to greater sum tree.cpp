int cs = 0;
    void transformTree(Node *root) {
        // code here
        if(!root)return;
        int d = root->data;
        transformTree(root->right);
        root->data = cs;
        cs += d;
        transformTree(root->left);
    }
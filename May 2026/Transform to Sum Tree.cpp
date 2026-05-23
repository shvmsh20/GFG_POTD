int solve(Node* node){
        if(node==nullptr){
            return 0;
        }
        if(node->left==nullptr && node->right==nullptr){
            int val = node->data;
            node->data = 0;
            return val;
        }
        int left = solve(node->left);
        int right = solve(node->right);
        int val = node->data;
        node->data = left+right;
        return left+right+val;
    }
    void toSumTree(Node *root) {
        // code here
        solve(root);
    }
bool solve(Node* node, int mn, int mx){
        if(node==nullptr){
            return true;
        }
        if(!(node->data>mn && node->data<mx)){
            return false;
        }
        return solve(node->left, mn, node->data) && solve(node->right, node->data, mx);
    }
    bool isBST(Node* root) {
        // Your code here
        return solve(root, 0, INT_MAX);
    }
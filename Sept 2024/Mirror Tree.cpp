Node* solve(Node* node){
        if(!node){
            return node;
        }
        Node* left = solve(node->left);
        Node* right = solve(node->right);
        node->left = right;
        node->right = left;
        return node;
    }
    void mirror(Node* node) {
        // code here
        solve(node);
    }
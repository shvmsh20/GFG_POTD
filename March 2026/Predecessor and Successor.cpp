bool solve(Node* node, int key, Node* &predecessor, Node* &successor){
        if(node==nullptr){
            return false;
        }
        if(solve(node->left, key, predecessor, successor)){
            return true;
        }
        if(node->data<key){
            predecessor = node;
        }else if(node->data>key){
            successor = node;
            return true;
        }
        return solve(node->right, key, predecessor, successor);
    }
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        Node* predecessor = nullptr, *successor = nullptr;
        solve(root, key, predecessor, successor);
        return {predecessor, successor};
    }
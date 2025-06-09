 bool solve(Node* node, int mn, int mx){
        if(node->left==nullptr && node->right==nullptr){
            
                if(mn+1==node->data && mx-1==node->data){
                    return true;
                }else{
                    return false;
                }
            
        }
        if(node->left){
            if(solve(node->left, mn, node->data)){
                return true;
            }
        }
        if(node->right){
            return solve(node->right, node->data, mx);
        }
        return false;
    }
    bool isDeadEnd(Node *root) {
        // Code here
        return solve(root, 0, INT_MAX);
    }
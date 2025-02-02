int height(Node* node) {
        // code here
        if(node==nullptr){
            return 0;
        }
        if(node->left==nullptr && node->right==nullptr){
            return 0;
        }
        int left = height(node->left);
        int right = height(node->right);
        return max(left, right)+1;
    }
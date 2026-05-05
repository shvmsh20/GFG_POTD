int getSize(Node* root) {
        // code here
        if(root==nullptr){
            return 0;
        }
        return 1+getSize(root->left)+getSize(root->right);
    }
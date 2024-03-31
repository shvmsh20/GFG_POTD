int findMaxForN(Node* root, int n) {
        // code here
        if(root==nullptr){
            return -1;
        }
        if(root->key==n){
            return n;
        }
        if(root->key>n){
            return findMaxForN(root->left, n);
        }
        int temp = findMaxForN(root->right, n);
        if(temp!=-1){
            return temp;
        }
        return root->key;
    }
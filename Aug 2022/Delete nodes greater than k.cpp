Node* deleteNode(Node* root, int k)
    {
        //Your code here
        if(root==nullptr){
            return nullptr;
        }
        root->left = deleteNode(root->left, k);
        if(root->data>=k){
            return root->left;
        }
       root->right = deleteNode(root->right, k);
       return root;
    }
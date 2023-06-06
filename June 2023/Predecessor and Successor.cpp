void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        while(root != NULL) {
            if(root->key == key) {
                Node *temp = root->left;
                while(temp != NULL) {
                    pre = temp;
                    temp = temp->right;
                }
                temp = root->right;
                while(temp != NULL) {
                    suc = temp;
                    temp = temp->left;
                }
                return;
            }
            else if(root->key > key) suc = root, root = root->left;
            else pre = root, root = root->right;
        }
    }
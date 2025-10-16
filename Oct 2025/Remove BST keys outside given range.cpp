void prune(Node* root, int l, int r, Node* parent) {
        if(!root) return;
        if(root->data > r){
            root->right = NULL;
            if(parent->data < root->data){
                parent->right = root->left;
            }else{
                parent->left = root->left;
            }
            prune(root->left, l, r, parent);
        }
        else if(root->data < l){
            root->left = NULL;
            if(parent->data < root->data){
                parent->right = root->right;
            }else{
                parent->left = root->right;
            }
            prune(root->right, l, r, parent);
        }else{
            prune(root->left, l, r, root);
            prune(root->right, l, r, root);
        }
    }
  
    Node* removekeys(Node* root, int l, int r) {
        Node * froot = new Node(INT_MAX);
        froot->left = root;
        prune(root, l, r, froot);
        return froot->left;
    }
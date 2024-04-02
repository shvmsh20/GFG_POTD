int res = INT_MAX;
    void inorder(Node* node, int &prev){
        if(node==nullptr){
            return;
        }
        inorder(node->left, prev);
        if(prev!=-1){
            res = min(res, (node->data-prev));
        }
        prev = node->data;
        inorder(node->right, prev);
    }
    int absolute_diff(Node *root)
    {
        //Your code here
        int prev = -1;
        inorder(root, prev);
        return res;
        
    }
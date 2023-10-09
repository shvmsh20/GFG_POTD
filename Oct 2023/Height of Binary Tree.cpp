int height(struct Node* node){
        // code here 
        if(node==nullptr){
            return 0;
        }
        int lheight = height(node->left);
        int rheight = height(node->right);
        return max(lheight, rheight)+1;
    }
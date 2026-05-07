 bool isSubTreeEqual(Node* root1, Node* root2){
        if(root1 == NULL && root2 == NULL){
            return true;
        }    
        
        if(root1 == NULL || root2 == NULL || root1->data != root2->data){
            return false;
        }
        
        return isSubTreeEqual(root1->left, root2->left) && isSubTreeEqual(root1->right, root2->right);
    }
    
    bool isSubTree(Node *root1, Node *root2) {
        // code here
        if(root1 == NULL){
            return false;
        }
        
        if(root1->data == root2->data && isSubTreeEqual(root1, root2)){
            return true;
        }
        
        return isSubTree(root1->left, root2) || isSubTree(root1->right, root2);
    }
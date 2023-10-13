int floor(Node* root, int x) {
        // Code here
        int f = -1;
        while(root){
            if(root -> data <= x){
                f = root -> data;
                root = root -> right;
            }
            else{
                root = root -> left;
            }
        }
        return f;
    }
int move=0;
    int getAns(Node* root){
        if(!root)
        return 0;
        int left= getAns(root->left);
        int right= getAns(root->right);
        move= move+ abs(left) + abs(right);
        return left + right + root->data -1;
    }
  
    int distCandy(Node* root) {
        // code here
        getAns(root);
        return move;
    }
int HeightNode (Node *part){
        if(part == NULL)
         return 0;
        else 
         return 1 + max(HeightNode(part -> left),HeightNode(part -> right));
    }
    int Balancefactor(Node *root){
        int hl ,hr;
         hl = root && root-> left?HeightNode(root->left):0;
         hr = root && root-> right?HeightNode(root->right):0;
          return abs(hl-hr);
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root == NULL)
         return true;
       if(Balancefactor(root) > 1)
        return false;
        
        return isBalanced(root -> left) && isBalanced(root -> right);
    }
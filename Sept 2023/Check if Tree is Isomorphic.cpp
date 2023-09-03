bool isIsomorphic(Node *root1,Node *root2)
    {
    //add code here.
    if(root1==nullptr && root2==nullptr){
        return true;
    }
    if(root1==nullptr || root2==nullptr){
        return false;
    }
    if(root1->data!=root2->data){
        return false;
    }
    return ((isIsomorphic(root1->left, root2->left) && isIsomorphic(root1->right, root2->right)) || 
    (isIsomorphic(root1->left, root2->right) && isIsomorphic(root1->right, root2->left)));
    }
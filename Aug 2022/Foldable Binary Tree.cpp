bool chck(Node* a, Node* b){
    if(a==nullptr && b==nullptr){
        return true;
    }
    if(a==nullptr || b==nullptr){
        return false;
    }
    return chck(a->left, b->right) && chck(a->right, b->left);
}
bool IsFoldable(Node* root)
{
    // Your code goes here
    if(root==nullptr){
        return true;
    }
    return chck(root->left, root->right);
}
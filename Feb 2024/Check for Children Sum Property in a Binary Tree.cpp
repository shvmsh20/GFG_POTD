int isSumProperty(Node *root)
    {
     // Add your code here
     if(root==nullptr){
         return 1;
     }
     if(root->left==NULL && root->right==NULL){
         return 1;
     }
     int l=0, r=0;
     if(root->left){
         l+=root->left->data;
     }
     if(root->right){
         r+=root->right->data;
     }
     return (root->data==(l+r) && isSumProperty(root->left) && isSumProperty(root->right))?1:0;
    }
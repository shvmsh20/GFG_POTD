int util(Node* root, int l, int h){
        if(root==nullptr){
            return 0;
        }
        if(root->data<l){
            return util(root->right, l, h);
        }else if(root->data>h){
            return util(root->left, l, h);
        }else{
            return 1+util(root->left, l, h)+util(root->right, l, h);
        }
    }
    int getCount(Node *root, int l, int h)
    {
      // your code goes here   
      return util(root, l, h);
    }
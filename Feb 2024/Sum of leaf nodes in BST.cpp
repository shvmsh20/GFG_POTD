int sumOfLeafNodes(Node *root ){
             /*Your code here */
             if(root==nullptr){
                 return 0;
             }
             int res = sumOfLeafNodes(root->left);
             res+= sumOfLeafNodes(root->right);
             if(!root->left && !root->right){
                 res+=root->data;
             }
             return res;
        }
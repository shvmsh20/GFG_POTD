void treePathsSumfun(Node* root,int &sum,int temp){
         if(root->left==NULL&&root->right==NULL){
             temp=temp*10+root->data;
             sum+=temp;
            //  cout<<temp<<endl;
             return;
         }
         
         if(root->left)
         treePathsSumfun(root->left,sum,temp*10+root->data);
         if(root->right)
         treePathsSumfun(root->right,sum,temp*10+root->data);
         
         return;
         
     }
    int treePathsSum(Node *root) {
         int sum=0;
         treePathsSumfun(root,sum,0);
         return sum;
    }
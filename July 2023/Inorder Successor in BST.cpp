Node* a=NULL;
    void f(Node* root,Node* x){
        if(root==NULL)return ;
        if(root->data > x->data){
            a=root;
            f(root->left,x);
        }
        else if(root->data == x->data){
            f(root->right,x);
        }
        else{
            f(root->right,x);
        }
    }
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        f(root,x);
        return a;
    }
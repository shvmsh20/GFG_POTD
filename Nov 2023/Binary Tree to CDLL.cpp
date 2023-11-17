 Node *prev=NULL;
    Node *head = NULL;
    Node *aux(Node *root){
        if(root==NULL) return root;
        aux(root->left);
        if(prev==NULL){
            head = root;
        }else{
            prev->right = root;
            root->left  = prev;
        }
        prev = root;
        aux(root->right);
    }
    Node *bTreeToCList(Node *root)
    {
    //add code here.
    aux(root);
    head->left = prev;
    prev->right = head;
    return head;
    }
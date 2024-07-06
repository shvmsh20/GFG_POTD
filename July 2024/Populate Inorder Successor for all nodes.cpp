void inorder(Node* a,Node **pre){
        if(!a) return;
        inorder(a->left,pre);
        (*pre)->next = a;
        *pre = a;
        inorder(a->right,pre);
        return;
    }
  public:
    void populateNext(Node *root) {
        Node *temp = new Node(-1);
        inorder(root, &temp);
        return;
    }
void inorder(Node *root,Node *&head){
      if(root==NULL) return ;
      
      inorder(root->left,head);
      Node *curr=new Node(root->data);
      head->right=curr;
      curr->left=head;
      head=curr;
      inorder(root->right,head);
  }
    Node* bToDLL(Node* root) {
        Node *head=new Node(-1);
        Node *head1=head;
        inorder(root,head);
        // head->right=head1->right;
        // head1->right->left=head;
        Node *temp=head1->right;
        if(temp!=NULL) temp->left=NULL;
        delete(head1);
        // // head->right=head1;
        // head1->left=head;
        return temp;
    }
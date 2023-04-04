TNode * xxx(LNode *head)
   {
       if(!head->next)return new TNode(head->data);
       LNode*prev=NULL;
       LNode* slow=head;
       LNode* fast=head;
       
       while(fast && fast->next)
       {
           prev=slow;
           fast=fast->next->next;
           slow=slow->next;
       }
       
       TNode* root=new TNode(slow->data);
       
       prev->next=NULL;
       root->left=xxx(head);
       
       if(slow->next)
       root->right=xxx(slow->next);
       return root;
       
   }
    TNode* sortedListToBST(LNode *head) {
        //code here
        return xxx(head);
    }
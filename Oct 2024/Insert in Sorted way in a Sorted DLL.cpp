Node* sortedInsert(Node* head, int x) {
        // Code here
        Node *n = new Node;
        n->data = x;
        n->prev = NULL;
        n->next = NULL;
        
        Node*pre=NULL;
        Node*curr=head;
        if(curr->data>=x)
        {
            
            n->next=curr;
            return n;
        }
        while(curr!=NULL)
        {
            if(curr->data<=x)
            {
                pre=curr;
                curr=curr->next;
            }
            else{
                break;
            }
        }
        pre->next=n;
        pre=pre->next;
        pre->next=curr;
        return head;
        
    }
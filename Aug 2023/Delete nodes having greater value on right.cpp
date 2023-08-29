Node*reverse(Node*head)
    {
        Node *prev=NULL;
        Node *curr=head;
        while(curr!=NULL)
        {
            Node *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        head=prev;
        return head;
    }
    Node *compute(Node *head)
    {
        if(head==NULL)return NULL;
        Node *temp=head;
        head=reverse(temp);
        Node*fast=head;
        Node *newnode=new Node(-1);
        Node*slow=newnode;
        while(fast!=NULL)
        {
            if(fast->data>=slow->data)
            {
                slow->next=new Node(fast->data);
                slow=slow->next;
            }
            fast=fast->next;
        }
        return reverse(newnode->next);
    }
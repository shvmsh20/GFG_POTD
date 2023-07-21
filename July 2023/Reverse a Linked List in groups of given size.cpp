void reverse(node* s,node* e){
        node* curr=s;
        node* prev=NULL;
        while(prev!=e){
            node* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
    }
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if(head==NULL|| head->next==NULL||k==1)
        return head;
        node* dummy=new node(-1);
        dummy->next=head;
        node* prev=dummy;
        node* e=head;
        int t=0;
        while(e!=NULL){
            t++;
            if(t%k==0||e->next==NULL){
                node *start=prev->next,*temp=e->next;
                reverse(start,e);
                prev->next=e;
                start->next=temp;
                prev=start;
                e=temp;
            }
            else
            e=e->next;
        }
         return dummy->next;
    }
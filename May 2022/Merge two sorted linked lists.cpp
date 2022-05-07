Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node *head = NULL, *tail=NULL;
    while(head1 && head2){
        if(head==NULL){
            if(head1->data<=head2->data){
                head = head1;
                tail = head1;
                head1 = head1->next;
            }else{
                head = head2;
                tail = head2;
                head2 = head2->next;
            }
        }else{
            if(head1->data<=head2->data){
                tail->next = head1;
                head1 = head1->next;
            }else{
                tail->next = head2;
                head2 = head2->next;
            }
            tail = tail->next;
        }
    }
    if(head1){
        tail->next = head1;
    }
    if(head2){
        tail->next = head2;
    }
    return head;
}
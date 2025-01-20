Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node* curr1 = head1, *curr2 = head2;
        Node* dummy = new Node(0);
        Node* curr = dummy;
        while(curr1 && curr2){
            if(curr1->data<=curr2->data){
                curr->next = curr1;
                curr1 = curr1->next;
            }else{
                curr->next = curr2;
                curr2 = curr2->next;
            }
            curr = curr->next;
        }
        if(curr1){
            curr->next = curr1;
        }
        if(curr2){
            curr->next = curr2;
        }
        return dummy->next;
    }
int length(Node *head){
        int count=0;
        Node *curr = head;
        while(curr!=NULL){
            count++;
            curr = curr->next;
        }
        return count;
    }
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node *curr = head;
        int len = length(head);
        k = k%len;
        if(k==0){
            return head;
        }
        for(int i=0;i<k-1;i++){
            curr = curr->next;
        }
        Node *new_head = curr->next;
        curr->next = NULL;
        curr = new_head;
        while(curr->next!=NULL){
            curr = curr->next;
        }
        curr->next = head;
        return new_head;
    }
int getLength(Node* head){
        int len = 0;
        while(head){
            len++;
            head = head->next;
        }
        return len;
    }
    Node* rotate(Node* head, int k) {
        // Your code here
        int len = getLength(head);
        k = k%len;
        if(k==0){
            return head;
        }
        Node* curr = head;
        for(int i=0; i<k-1; i++){
            curr = curr->next;
        }
        Node* newHead = curr->next;
        curr->next = nullptr;
        curr = newHead;
        while(curr && curr->next){
            curr = curr->next;
        }
        curr->next = head;
        return newHead;
    }
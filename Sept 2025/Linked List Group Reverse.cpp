Node *reverseKGroup(Node *head, int k) {
        // code here
        if (!head || k==1) return head;
        Node* temp = head, *prv = NULL, *nxt = NULL;
        for(int i=0;i<k && temp;i++) {
            nxt = temp->next;
            temp->next = prv;
            prv = temp;
            temp = nxt;
        }
        head->next = reverseKGroup(temp, k);
        return prv; 
    }
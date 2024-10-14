int getCount(struct Node* head) {

        // Code here
        int n = 0;
        while(head){
            n++;
            head = head->next;
        }
        return n;
    }
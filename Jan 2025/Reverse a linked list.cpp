Node* reverseList(struct Node* head) {
        // code here
        Node *prev = nullptr;
        Node* next, *curr = head;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
void deleteAlt(struct Node *head) {
        // Code here
        Node* curr = head;
        while(curr && curr->next){
            Node* next = curr->next->next;
            delete curr->next;
            curr->next = next;
            curr = next;
        }
    }
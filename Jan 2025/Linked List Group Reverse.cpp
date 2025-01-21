Node *reverseKGroup (Node *head, int k)
    { 
        // Complete this method
        if(head==nullptr){
            return nullptr;
        }
        Node* curr = head;
        Node* prev = nullptr;
        for(int i=0; i<k && curr!=nullptr; i++){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head->next = reverseKGroup(curr, k);
        return prev;
    }
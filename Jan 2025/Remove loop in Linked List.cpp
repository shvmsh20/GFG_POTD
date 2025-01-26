void removeLoop(Node* head) {
        // code here
        unordered_set<Node*> s;
        Node* prev = nullptr;
        while(head){
            if(s.find(head)!=s.end()){
                prev->next = nullptr;
                break;
            }
            s.insert(head);
            prev = head;
            head = head->next;
        }
    }
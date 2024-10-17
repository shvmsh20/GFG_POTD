vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        Node *h1 = head, *h2 = head->next;
        Node* c1 = head, *c2 = head->next;
        while(c1 && c1->next){
            c1->next =  c1->next->next;
            c1 = c1->next;
            if(c2->next){
                c2->next =  c2->next->next;
                c2 = c2->next;
            }else{
                c2->next = nullptr;
            }
        }
        return {h1, h2};
    }
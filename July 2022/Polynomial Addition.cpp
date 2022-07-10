Node* addPolynomial(Node *p1, Node *p2)
    {
        //Your code here
        Node* dummy = new Node(0, 0);
        Node* curr = dummy;
        while(p1 && p2){
            if(p1->pow>p2->pow){
                curr->next = p1;
                curr = curr->next;
                p1 = p1->next;
            }else if(p2->pow>p1->pow){
                curr->next = p2;
                curr = curr->next;
                p2 = p2->next;
            }else{
                p1->coeff+= p2->coeff;
                curr->next = p1;
                curr = curr->next;
                p1 = p1->next;
                p2 = p2->next;
            }
        }
        if(p1){
            curr->next = p1;
        }
        if(p2){
            curr->next = p2;
        }
        return dummy->next;
    }
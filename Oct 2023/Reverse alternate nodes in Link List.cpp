Node* Reverse(Node* head){
        Node* dummy = NULL;
        while(head!=NULL){
            Node* next = head->next;
            head->next=dummy;
            dummy = head;
            head = next;
        }
        return dummy;
    }
    void rearrange(struct Node *odd)
    {
        Node* slow = odd;
        Node* fast = odd->next;
        Node* temp = odd->next;
        while(slow->next && fast->next){
            slow->next=fast->next;
            slow=fast->next;
            fast->next = slow->next;
            fast = slow->next;
        }
        slow->next = Reverse(temp);
        
    }
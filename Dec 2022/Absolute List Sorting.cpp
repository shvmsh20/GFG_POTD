Node* sortList(Node* head)
    {
        // Your Code Here
        if(head->next==nullptr){
            return head;
        }
        Node* newHead = head, *tail = head, *curr=head->next;
        while(curr){
            if(newHead->data>=curr->data){
                tail->next = curr->next;
                curr->next = newHead;
                newHead = curr;
                curr = tail->next;
            }else{
                tail = curr;
                curr = curr->next;
            }
        }
        return newHead;
    }
ListNode *moveToFront(ListNode *head){
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* curr = head, *prev = nullptr;
        while(curr->next){
            prev = curr;
            curr = curr->next;
        }
        curr->next = head;
        prev->next = nullptr;
        return curr;
    }
    
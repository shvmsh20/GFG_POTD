bool detectLoop(Node* head) {
        // your code here
        Node* slow = head, *fast = head;
        if(head->next==nullptr){
            return false;
        }
        do{
            slow = slow->next;
            fast = fast->next->next;
        }while(fast!=slow && fast && fast->next);
        if(slow==fast){
            return true;
        }
        return false;
    }
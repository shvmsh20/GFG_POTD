 int findFirstNode(Node* head)
    {
        // your code here
        if(head==nullptr || head->next==nullptr){
            return -1;
        }
        Node* fast = head, *slow = fast;
        do{
            slow = slow->next;
            fast = fast->next->next;
        }while(fast && fast->next && fast!=slow);
        if(fast==nullptr || fast->next==nullptr){
            return -1;
        }
        slow = head;
        while(fast!=slow){
            fast = fast->next;
            slow = slow->next;
        }
        return fast->data;
    }
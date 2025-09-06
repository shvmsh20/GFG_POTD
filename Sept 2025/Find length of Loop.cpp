int lengthOfLoop(Node *head) {
        // code here
        if(head==NULL || head->next==NULL) return 0;
    Node *slow = head;
    Node *fast = head;
    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(fast && fast->next && slow!=fast);
    if(fast==NULL || fast->next==NULL) return 0;
    while(fast!=slow){
        fast = fast->next;
        slow = slow->next;
    }
    int count=0;
    do{
        slow = slow->next;
        count++;
    }while(slow!=fast);
    return count;
    }
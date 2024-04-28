 Node* deleteMid(Node* head)
    {
        // Your Code Here
         Node* t1 = head;
        Node* t2 = head;
        Node* prev = NULL;
        if(head->next == NULL)
            return head->next;
        while(t2 != NULL && t2->next != NULL)
        {
            prev = t1;
            t1 = t1->next;
            t2 = t2->next;
            t2 = t2->next;
        }
        if(t1 != NULL)
        {
            Node* temp = t1;
            prev->next = t1->next;
            delete(temp);
        }
        return head;
    }
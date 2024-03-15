 Node* reverseLL(Node* curr1){
        Node* prev = nullptr;
        while(curr1){
            Node* temp = curr1->next;
            curr1->next = prev;
            prev = curr1;
            curr1 = temp;
        }
        return prev;
    }
    void sort(Node **head)
    {
         // Code here
         Node* l1 = new Node(0);
         Node* l2 = new Node(0);
         l1 = (*head);
         l2 = (*head)->next;
         Node* curr1 = l1,  *curr2 = l2;
         while(curr1 && curr2){
            curr1->next = curr2->next;
            curr2->next = curr2->next ? curr2->next->next : nullptr;
            curr1 = curr1->next;
            curr2 = curr2->next;
         }
         
         l2 = reverseLL(l2);
         while(l2){
             cout << l2->data << endl;
             l2 = l2->next;
         }
         
         Node* dummy = new Node(0);
         Node* curr = dummy;
         while(l1 && l2){
             if(l1->data<=l2->data){
                 curr->next = l1;
                 curr = curr->next;
                 l1 = l1->next;
             }else{
                 curr->next = l2;
                 curr = curr->next;
                 l2 = l2->next;
             }
         }
         if(l1){
             curr->next = l1;
         }
         if(l2){
             curr->next = l2;
         }
         *head = dummy->next;
    }